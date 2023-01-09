#include "stdlib.h"
#include "stdio.h"

int main() {
    int input, validation, sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &input);
        sum += input * input;
    }

    validation = sum % 10;
    printf("%d\n", validation);

    return 0;
}

/*
    기본 양식
    gcc .\main.c -o main.exe
    .\main.exe
*/