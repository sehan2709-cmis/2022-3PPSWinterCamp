class Solution {

public:
  string removeOuterParentheses(string s) {
    int n = s.size();

    vector<int> v(n, 0);
    v.push_back(0);

    int ct = 0;
    int x = 0;

    v[0] = 0;
    int prev = -1;

    for (int i = 0; i < n; i++) {

      if (s[i] == '(') {
        ct++;
      } else if (s[i] == ')') {
        ct--;
      }

      if ((ct == 1) && (prev == 0)) {
        v[i] = i;
        prev = -1;
      }

      if (ct == 0) {
        v[i] = i;
        prev = 0;
      }
    }

    string sp = "";

    for (int i = 0; i < n; i++) {
      if (v[i] != i) {
        cout << s[i] << " ";
        sp += s[i];
      }
    }

    return sp;
  }
};