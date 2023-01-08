#include "stdlib.h"
#include "stdio.h"

int main() {
    int input, product = 1, array[10] = {0}, mod;
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &input);
        product *= input;
    }
    
    while (product > 0) {
        mod = product % 10;
        array[mod]++;
        product = product / 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

/*
    기본 양식
    gcc .\main.c -o main.exe
    .\main.exe
*/