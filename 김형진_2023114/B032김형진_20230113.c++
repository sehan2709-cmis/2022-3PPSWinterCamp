#include <iostream>
#include <algorithm>

using namespace std;
int tree[1000000];
int treemin[1000000];

bool DESC(int a, int b) {
	return a > b;
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}

	sort(tree, tree + N, DESC);

	for (int i = 0; i < N; i++) {
		treemin[i] = (i + 1) + tree[i];
	}

	sort(treemin, treemin + N, DESC);

	cout << treemin[0] + 1;
	return 0;
}