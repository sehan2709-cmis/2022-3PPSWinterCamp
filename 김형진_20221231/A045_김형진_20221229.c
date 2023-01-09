#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    char input[1000000];
    int alphabet[26] = {0}, letter;
    int max = -1, maxIndex = -1, prevMax = -1, len;
    scanf("%s", input);

    len = strlen(input);

    for (int i = 0; i < len; i++) {
        if (input[i] >= 97 && input[i] <= 122) {
             letter = input[i] - 'a';
        }
        else {
             letter = input[i] - 'A';
        }

        alphabet[letter]++;

        if (alphabet[letter] >= max) {
            prevMax = max;
            max = alphabet[letter];
            maxIndex = letter;
        }
    }

   if (prevMax != max) {
        printf("%c", maxIndex + 65);
   }

   else {
        printf("?\n");
   }

    return 0;
}