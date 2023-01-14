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
    int numOfCase, count = 0, result;
    int *array;

    scanf("%d", &numOfCase);
    array = (int*)malloc(sizeof(int) * numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d", &array[i]);
    }

    sort(&array[0], &array[numOfCase]);
    scanf("%d", &result); 

    for (int i = 0, j = numOfCase - 1; i < j;) {
        if(array[i] + array[j] > result) j--;
		else if(array[i] + array[j] < result) i++;
		else { count++; j--; }
    }

    printf("%d\n", count);

    return 0;
}