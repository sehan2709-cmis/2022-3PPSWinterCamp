#include "stdlib.h"
#include "stdio.h"

int main() {
    int numOfMulti, sum = 1, input;

    scanf("%d", &numOfMulti);

    for (int i = 0; i < numOfMulti; i++) {
        scanf("%d", &input);
        sum--;
        sum += input;
    }

    printf("%d\n", sum);

    return 0;
}