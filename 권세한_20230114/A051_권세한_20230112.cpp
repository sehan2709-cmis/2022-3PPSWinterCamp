#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  int arr[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6,  6,  6,  7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10}, sum = 0, index;
  string s;

  cin >> s;

  for (int i = 0; i < s.length(); ++i) {
    index = s[i] - 65;
    sum += arr[index];
  }
  cout << sum << endl;

  return 0;
}