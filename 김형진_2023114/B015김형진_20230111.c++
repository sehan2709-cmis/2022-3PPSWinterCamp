#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"

using namespace std;

const int MAX = 100001;
int n, s, val[MAX];
bool visited[MAX];

void dfs(int now)
{
	if (now < 1 || now > n)
		return;
	visited[now] = true;

	dfs(now + val[now]);
	dfs(now - val[now]);
}

int main(void)
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> val[i];

	cin >> s;
	dfs(s);

	int ans = 0;
	for (int i = 1; i <= n; i++)
		if (visited[i])
			ans++;

	cout << ans;
	return 0;
}
