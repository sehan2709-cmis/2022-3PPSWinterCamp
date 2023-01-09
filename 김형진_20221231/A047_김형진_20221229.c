#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    char input[100];
    int len;

    scanf("%s", input);
    len = strlen(input);

    for (int i = 0; i < len; i++) {
        printf("%c", input[i]);

        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}
