#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    int numOfCase, len, sum = 0, count = 0;
    char input[80];

    scanf("%d", &numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%s", input);
        len = strlen(input);

        for (int j = 0; j < len; j++) {
            if (input[j] == 'O') {
                count++;
            }

            else if (input[j] == 'X') {
                count = 0;
            }

            sum += count;
        }

        printf("%d\n", sum);
        sum = 0;
        count = 0;
    }

    return 0;
}