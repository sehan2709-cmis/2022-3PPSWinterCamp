#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    char input[100], alphabet[26] = {0};
    int numOfInput, len, result = 0;

    scanf("%d", &numOfInput);

    for (int i = 0; i < numOfInput; i++) {
        scanf("%s", input);
        len = strlen(input);
        result++;
        for (int j = 0; j < len; j++) {
            if (j != 0 && input[j] - input[j - 1] != 0 && alphabet[input[j] - 'a'] != 0) {
                result--;
                break;
            }

            else {
                alphabet[input[j] - 'a'] = 1;
            }
        }

        for (int i = 0; i < 26; i++) {
            alphabet[i] = 0;
        }
    }

    printf("%d\n", result);
    return 0;
}
