#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int number, divider = 2;

    scanf("%d", &number);

    while (number > 1)
    {
        if (number % divider == 0) {
            number = number / divider;
            printf("%d\n", divider);
        }

        else {
            divider++;
        }
    }
    
    return 0;
}