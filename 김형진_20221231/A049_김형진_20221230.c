#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    char input[21];
    char vowel[6] = "aeiou";
    bool isVowelInclude = false, isNotThree = true, isNotSame = true;
    int len, vowelCount = 0;

    while (1) 
    {
        scanf("%s", input);
        if (strcmp(input, "end") == 0) {
            break;
        }

        len = strlen(input);

        for (int i = 0; i < len; i++) {
            if (!isVowelInclude && (input[i] == vowel[0] || input[i] == vowel[1] || input[i] == vowel[2] || input[i] == vowel[3] || input[i] == vowel[4])) {
                isVowelInclude = true;
            }

            if (i != 0 && input[i] - input[i - 1] == 0 && input[i] != 'e' && input[i] != 'o') {
                isNotSame = false;
                break;
            }

            if (i < len - 2) {
                for (int j = i; j < i + 3; j++) {
                    if (input[j] == vowel[0] || input[j] == vowel[1] || input[j] == vowel[2] || input[j] == vowel[3] || input[j] == vowel[4]) {
                        vowelCount++;
                    }
                }

                if (vowelCount == 0 || vowelCount == 3) {
                    isNotThree = false;
                    break;
                }

                vowelCount = 0;
            }
        }

        if (isVowelInclude && isNotThree && isNotSame) {
            printf("<%s> is acceptable.\n", input);
        }

        else {
            printf("<%s> is not acceptable.\n", input);
        }

        isVowelInclude = false;
        isNotThree = true;
        isNotSame = true;
    }
    

    return 0;
}