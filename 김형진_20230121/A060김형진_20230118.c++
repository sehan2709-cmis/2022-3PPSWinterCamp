#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "stack"
#include "queue"
#include "algorithm"
#include <string> 
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int sum = 0;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                s.pop();
            }

            else if (operations[i] == "D") {
                int t = s.top();
                s.push(t * 2);
            }

            else if (operations[i] == "+") {
                int temp = s.top();
                s.pop();
                int temp2 = s.top();
                s.push(temp);
                s.push(temp + temp2);
            }

            else {
                int temp = stoi(operations[i]);
                s.push(temp);
            }
        }

        while(!s.empty()) {
            sum += s.top();
            s.pop();
        }

        return sum;
    }
};