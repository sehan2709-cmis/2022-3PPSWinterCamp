#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "vector"
using namespace std;

vector<int> list[101];
bool isTrue[101] = {false};
int cnt = 0;

void func(int a) {
    isTrue[a] = true;
    for (int i = 0; i < list[a].size(); i++) {
        if (!isTrue[list[a][i]]) {
            cnt++;
            func(list[a][i]);
        }
    }
}

int main() {
    int a, b, start, end;
    cin >> a >> b;

    for (int i = 0; i < b; i++) {
        cin >> start >> end;
        list[start].push_back(end);
        list[end].push_back(start);
    }

    func(1);

    cout << cnt << endl;

    return 0;
}