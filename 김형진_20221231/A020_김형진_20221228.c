#include "stdlib.h"
#include "stdio.h"

int main() {
    int max = 0, input, sum = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &input);
            
            if (j == 0) {
                sum -= input;
            }

            else {
                sum += input;
            }
        }

        if (sum > max) {
            max = sum;
        }
    }

    printf("%d\n", max);

    return 0;
}