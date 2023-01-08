#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int numOfCase, numOfString, setMin = 99999999, oneMin = 99999999, cost = 99999999;
    int **array;

    scanf("%d %d", &numOfString, &numOfCase);

    array = (int**)malloc(sizeof(int*) * numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        array[i] = (int*)malloc(sizeof(int) * 2);
        scanf("%d %d", &array[i][0], &array[i][1]);
        
        if (oneMin > array[i][1]) {
            oneMin = array[i][1];
        }

        if (setMin > array[i][0]) {
            setMin = array[i][0];
        }
    }

    if (cost > oneMin * numOfString) {
        cost = oneMin * numOfString;
    }

    if (cost > setMin * ((numOfString / 6) + 1)) {
        cost = setMin * ((numOfString / 6) + 1);
    }

    if (cost > setMin * (numOfString / 6) + oneMin * (numOfString - (numOfString / 6 * 6))) {
        cost = setMin * (numOfString / 6) + oneMin * (numOfString - (numOfString / 6 * 6));
    }
    
    printf("%d\n", cost);

    return 0;
}