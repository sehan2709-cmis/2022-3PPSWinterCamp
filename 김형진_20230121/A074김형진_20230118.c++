#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "stack"
#include "queue"
#include "algorithm"
#include "string"
using namespace std;

#include "string.h"
#include <cctype>
#include "stdbool.h"
#include <iostream>

class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        bool isPalin = true;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                char temp = tolower(s[i]);
                ans += temp;
            }

            else if (s[i] >= 97 && s[i] <= 122) {
                ans += s[i];
            }

            else if (s[i] >= 48 && s[i] <= 57) {
                ans += s[i];
            }
        }

        for (int i = 0; i < ans.length(); i++) {
            printf("%c", ans[i]);
        }

        for (int i = 0; i < ans.length()/2; i++) {
            if (ans[i] != ans[ans.length() - i - 1]) {
                isPalin = false;
                break;
            }
        }

        return isPalin;
    }
};