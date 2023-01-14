#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"
using namespace std;

vector<int> list[1001];
bool isDFSTrue[1001] = {false};
bool isBFSTrue[1001] = {false};
queue<int> q;

void dfs(int a) {
    cout << a << ' ';
    isDFSTrue[a] = true;
    for (std::size_t i = 0; i < list[a].size(); i++) {
        if (!isDFSTrue[list[a][i]]) {
            dfs(list[a][i]);
        }
    }
}

int main() {

    int a, b, c, start, end;
    cin >> a >> b >> c;

    for (int i = 0; i < b; i++) {
        cin >> start >> end;
        list[start].push_back(end);
        list[end].push_back(start);
    }

    for (int i = 1; i <= a; i++) {
        sort(list[i].begin(), list[i].end());
    }

    dfs(c);
    cout << endl;

    q.push(c);
    isBFSTrue[c] = true;
    while(!q.empty()) {
        int x = q.front();
        cout << x << ' ';
        q.pop();

        for (std::size_t i = 0; i < list[x].size(); i++) {
            if (!isBFSTrue[list[x][i]]) {
                isBFSTrue[list[x][i]] = true;
                q.push(list[x][i]);
            }
        }
    }

    return 0;
}