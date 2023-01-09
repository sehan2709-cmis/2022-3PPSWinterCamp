#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int start, end, sum = 0, adder = 1, adderCount = 0;

    scanf("%d %d", &start, &end);

    for (int i = 0; i < end; i++) {
        if (i + 1 >= start && i + 1 <= end) {
            sum += adder;
        }

        adderCount++;

        if (adderCount == adder) {
            adder++;
            adderCount = 0;
        }
    }

    printf("%d\n", sum);
    return 0;
}