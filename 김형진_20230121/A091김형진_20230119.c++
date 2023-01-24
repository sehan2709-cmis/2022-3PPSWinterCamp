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
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (val != nums[i]) {
                ans.push_back(nums[i]);
            }
        }

        nums = ans;
        return nums.size();
    }
};