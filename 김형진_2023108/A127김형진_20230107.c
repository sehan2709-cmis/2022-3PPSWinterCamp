#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int numA, numB, numOfCase, max;

    scanf("%d", &numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d %d", &numA, &numB);

        for (int j = 1, k = 1; j <= numA, k <= numB; j++, k++) {
            if (numA % j == 0 && numB % k == 0) {
                max = j;
            }
        }

        printf("%d\n", numA * numB / max);
    }

    return 0;
}