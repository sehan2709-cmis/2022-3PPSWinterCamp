#include <iostream>
#include <algorithm>

using namespace std;

int N;
int num[11];
string s;

int main() {
  cin >> s;

  for(int i=0;i<s.length();i++){
    num[ s[i] - 48]++;
  }

  int sn = (num[6] + num[9] +1)/2;
  num[9] = sn;
  num[6] = num[9];
  cout << *max_element(num, num+11);
}