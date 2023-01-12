#include <iostream>

using namespace std;

int main() {
  int n, cnt = 0, size;
  string str;
  cin >> n;
  bool flag;

  for (int i = 0; i < n; i++) {
    cin >> str;
    size = str.length();
    flag = true;

    for (int j = 0; j < size; j++) {
      for (int k = 0; k < j; k++) {
        if (str[j] != str[j - 1] && str[j] == str[k]) {
          flag = false;
          break;
        }
      }
    }
    
    if (flag) cnt++;
  }

  cout << cnt;

  return 0;
}