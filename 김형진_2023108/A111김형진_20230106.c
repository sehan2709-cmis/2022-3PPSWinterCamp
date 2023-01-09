#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int numOfCase, people = 1;
    int* input;

    scanf("%d", &numOfCase);

    input = (int*)malloc(sizeof(int) * numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d", &input[i]);
        for (int j = 0; j < input[i] - 1; j++) {
            people = people * 2 + 1;
        }

        printf("%d\n", people);
        people = 1;
    }

    return 0;
}