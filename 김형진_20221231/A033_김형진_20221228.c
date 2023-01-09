#include "stdlib.h"
#include "stdio.h"

int main() {
    int input, sum, max = 0, num;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &input);
            sum += input;
        }

        if (sum > max) {
            max = sum;
            num = i + 1;
        }

        sum = 0;
    }

    printf("%d %d", num, max);
    return 0;
}