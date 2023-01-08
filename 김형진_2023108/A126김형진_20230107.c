#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int number, count = 0, slot[4] = {0}, calNumber, index = 0;

    scanf("%d", &number);

    if (number > 99) {
        count = 99; 
        
        for (int i = 100; i <= number; i++) {
            calNumber = i;
            while (calNumber != 0)
            {
                slot[index] = calNumber % 10;
                calNumber = calNumber / 10;
                index++;
            }
            
            if (i != 1000 && slot[0] - slot[1] == slot[1] - slot[2]) {
                count++;
            }

            index = 0;
        }
    }

    else {
        count = number;
    }

    printf("%d\n", count);

    return 0;
}