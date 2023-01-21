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
    bool halvesAreAlike(string s) {
        vector<char> set = {'a', 'e', 'i', 'o', 'u','A','I','E','O','U'};
        int count1 = 0, count2 = 0;
        for (int i = 0, j = s.length()/2; i < s.length()/2; i++, j++) {
            for (int k = 0; k < 10; k++) {
                if (s[i] == set[k]) count1++;
                if (s[j] == set[k]) count2++;
            }
        }

        if (count1 == count2) {
            return true;
        }

        else {
            return false;
        }
    }
};