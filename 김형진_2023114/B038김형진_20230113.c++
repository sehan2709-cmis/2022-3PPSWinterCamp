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
    int numOfFruit, length;
    int *height;
    scanf("%d %d", &numOfFruit, &length);
    height = (int*)malloc(sizeof(int) * numOfFruit);

    for (int i = 0; i < numOfFruit; i++) {
        scanf("%d", &height[i]);
    }

    sort(&height[0], &height[numOfFruit]);

    for (int i = 0; i < numOfFruit; i++) {
        if (length >= height[i]) {
            length++;
        }

        else {
            break;
        }
    }

    printf("%d\n", length);

    return 0;
}