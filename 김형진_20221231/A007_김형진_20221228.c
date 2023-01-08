#include "stdlib.h"
#include "stdio.h"

int main() {
    int input, prevInput, subtraction;

    for (int i = 0; i < 8; i++, prevInput = input) {
        scanf("%d", &input);
        
        if (i != 0 && prevInput - input != 1 && prevInput - input != -1) {
            printf("mixed");
            return 0;
        }
        
        if (i == 7) {
            if (prevInput - input == 1) {
                printf("descending");
            }

            else {
                printf("ascending");
            }
        }
    }

    return 0;
}

/*
    기본 양식
    gcc .\main.c -o main.exe
    .\main.exe
*/