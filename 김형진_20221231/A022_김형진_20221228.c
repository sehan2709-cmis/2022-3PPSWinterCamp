#include "stdlib.h"
#include "stdio.h"

int main() {
    int numOfCall, input, costY = 0, costM = 0;

    scanf("%d", &numOfCall);

    for (int i = 0; i < numOfCall; i++) {
        scanf("%d", &input);
        costY += (input / 30 + 1) * 10;
        costM += (input / 60 + 1) * 15;   
    }

    if (costY < costM) {
        printf("Y %d", costY);
    }

    else if (costY > costM) {
        printf("M %d", costM);
    }

    else {
        printf("Y M %d", costY);
    }

    return 0;
}