#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    int sum = 0, numOfCase, alphabet[26] = {0}; ;
    char input[1001];

    scanf("%d", &numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%s", &input);
        for (int j = 0; j < strlen(input); j++) {
            alphabet[input[j] - 'A'] = 1;
        }

        for (int j = 0; j < 26; j++) {
            if (alphabet[j] == 0) {
                sum += j + 'A';
            }

            else {
                alphabet[j] = 0;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}