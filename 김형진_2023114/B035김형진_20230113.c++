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
    int count = 0, numOfCoin, cost;
    int *value;

    scanf("%d %d", &numOfCoin, &cost);
    value = (int*)malloc(sizeof(int) * numOfCoin);
    for (int i = 0; i < numOfCoin; i++) {
        scanf("%d", &value[i]);
    }

    for (int i = numOfCoin - 1; i >= 0; i--) {
        if (cost / value[i] > 0) {
            count += cost / value[i];
            cost = cost % value[i];
        }
    }

    printf("%d\n", count);

    return 0;
}