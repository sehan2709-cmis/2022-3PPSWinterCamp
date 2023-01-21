#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"

bool isPowerOfFour(int n){
    long long int number = 1;
    while (true) {
        if (number == n) {
            return true;
        }

        else if (number > n) {
            return false;
        }

        number = number * 4;
    }
}