#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int countA = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A') countA++;
            if (s[i] == 'L' && i < s.length() - 2 && s[i] == s[i + 1] && s[i] == s[i + 2]) return false;
        }

        return countA < 2;
    }
};