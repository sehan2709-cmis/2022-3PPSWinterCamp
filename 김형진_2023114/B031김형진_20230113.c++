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
    int a, b, numOfButton, count = 0, value;
    int *button;

    scanf("%d %d %d", &a, &b, &numOfButton);
    button = (int*)malloc(sizeof(int) * numOfButton);
    value = abs(a - b);

    for (int i = 0; i < numOfButton; i++) {
        scanf("%d", &button[i]);

        if (value > abs(b - button[i])) {
            value = abs(b - button[i]);
            count = 1;
        }
    }

    count = count + value;
    printf("%d\n", count);

    return 0;
}