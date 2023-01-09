#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    char input[11], temp;
    int len;

    scanf("%s", input);
    len = strlen(input);

    for (int i = len - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (input[j] < input[j + 1]) {
                temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
    }

    printf("%s", input);
    return 0;
}