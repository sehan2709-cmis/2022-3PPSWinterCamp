#include <stdio.h>
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"

bool lemonadeChange(int* bills, int billsSize){
    int five = 0, ten = 0, twenty = 0;

    for (int i = 0; i < billsSize; i++) {
        if (bills[i] == 5) {
            five++;
        }

        else if (bills[i] == 10) {
            if (five >= 1) {
                five--;
                ten++;
            }

            else {
                return false;
            }
        }

        else {
            if (five >= 1 && ten >= 1) {
                five--;
                ten--;
                twenty++;
            }

            else if (five >= 3) {
                five -= 3;
                twenty++;
            }

            else {
                return false;
            }
        }
    }

    return true;
}
