#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int n, num, sum = 1;

  cin >> n;

  while (n--) {
    cin >> num;
    sum += num - 1;
  }

  cout << sum << endl;

  return 0;
}