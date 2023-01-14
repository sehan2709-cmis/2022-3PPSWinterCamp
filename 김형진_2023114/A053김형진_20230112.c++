#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "stack"
#include "algorithm"
using namespace std;

int main() {
    int N, x;
    string line;
    stack<int> s;
    
    cin.tie(NULL);
	cin.sync_with_stdio(false);
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> line;

		if (line == "push")
		{
			cin >> x;
			s.push(x);
		}
		else if (line == "pop")
		{
			if (!s.empty())
			{
				cout << s.top() << '\n';
				s.pop();
			}
			else cout << -1 << '\n';

		}
		else if (line == "size")
		{
			cout << s.size() << '\n';
		}
		else if (line == "empty")
		{
			cout << s.empty() << '\n';
		}
		else // line == "top"
		{
			if (!s.empty()) cout << s.top() << '\n';
			else cout << -1 << '\n';
		}
	}

    return 0;
}