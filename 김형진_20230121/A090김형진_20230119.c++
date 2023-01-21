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
    int removeDuplicates(vector<int>& nums) {
        int countNum = 0, temp = -9999999;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (temp != nums[i]) {
                ans.push_back(nums[i]);
                temp = nums[i];
                countNum++;
            }
        }

        nums = ans;
        return countNum;
    }
};