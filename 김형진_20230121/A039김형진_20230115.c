#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"
#include "math.h"

bool isPerfectSquare(int num){
    float result;
    result = sqrt(num);

    if (result - (int)result == 0) {
        return true;
    }

    else {
        return false;
    }
}