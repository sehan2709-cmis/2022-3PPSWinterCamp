#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int coin[6] = {500, 100, 50, 10, 5, 1}, count = 0, cost;
    float result;

    scanf("%d", &cost);
    cost = 1000 - cost;

    for (int i = 0; i < 6; i++) {
        result = (float)cost / (float)coin[i];
        if (result >= 1) {
            count += result;
        }

        cost = cost % coin[i];
    }
    
    printf("%d\n", count);

    return 0;
}
