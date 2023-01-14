#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include <iostream>
#include "vector"
#include "queue"
#include "algorithm"
using namespace std;

int main() {
    int countA, countB, countC, time;

    countA = countB = countC = 0;
    scanf("%d", &time);

    countA = time / 300;
    time = time % 300;
    countB = time / 60;
    time = time % 60;
    countC = time / 10;
    time = time % 10;

    if (time == 0) {
        printf("%d %d %d", countA, countB, countC);
    }

    else {
        printf("-1\n");
    }

    return 0;
}