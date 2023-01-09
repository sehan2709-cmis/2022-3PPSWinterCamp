#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

int main() {
    bool isOver = false;
    int numOfPlayer, alphabet[26] = {0};
    char name[30];

    scanf("%d", &numOfPlayer);

    for (int i = 0; i < numOfPlayer; i++) {
        scanf("%s", name);
        alphabet[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] >= 5) {
            printf("%c", i + 'a');
            isOver = true;
        }

        if (i == 25 && !isOver) {
            printf("PREDAJA\n");
        }
    }

    return 0;
}