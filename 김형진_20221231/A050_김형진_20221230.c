#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    char input[1001], output[1001];
    int len;

    scanf("%s", input);
    len = strlen(input);

    for (int i = 0; i < len; i++) {
        if (input[i] >= 'A' && input[i] <= 'C') {
            output[i] = input[i] + 23;
        }

        else {
            output[i] = input[i] - 3;
        }
    }

    printf("%s", output);

    return 0;
}