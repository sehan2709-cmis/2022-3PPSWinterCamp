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
    bool backspaceCompare(string S, string T) {
        vector<char>s,t;
        int n1=S.length(), n2 = T.length(),i=0,j=0;
        
        
        while(i<n1){
             if(S[i]=='#'){ 
                if(!s.empty())
                    s.pop_back();
            }else{
                s.push_back(S[i]);
            }
            i++;
        }
        
        while(j<n2){
            if(T[j]=='#'){
                if(!t.empty())
                    t.pop_back();
            }else{
                t.push_back(T[j]);
            }
            j++;
        }
        return(s==t?1:0);
    }
};