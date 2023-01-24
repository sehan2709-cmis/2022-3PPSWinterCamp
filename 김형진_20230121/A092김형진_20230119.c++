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

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd, even, ans;
        vector<int>::iterator iter1, iter2;
        int j = 0, k = 0, l = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            }

            else {
                odd.push_back(nums[i]);
            }
        }

        iter1 = even.begin();
        iter2 = odd.begin();

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                ans.push_back(*iter1);
                iter1++;
            }

            else {
                ans.push_back(*iter2);
                iter2++;
            }
        }

        return ans;
    }
};