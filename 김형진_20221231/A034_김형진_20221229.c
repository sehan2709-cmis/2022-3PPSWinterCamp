#include "stdlib.h"
#include "stdio.h"

int main() {
    int input, array[42] = {0}, count = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        array[input%42]++;
    }

    for (int i = 0; i < 42; i++) {
        if (array[i] != 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}