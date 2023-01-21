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
    string convertToTitle(int n) {
	    string res="";
        while(n>0){
            res=char('A'+(n-1)%26)+res;
            n=(n-1)/26;
        }
        return res;
    }
};