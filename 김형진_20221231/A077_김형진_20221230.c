#include "stdlib.h"
#include "stdio.h"

int main() {
    int score[8][1], index[8][1] = {-1}, orderedIndex[5][1] = {-1}, sum = 0, temp;

    for (int i = 0; i < 8; i++) {
        scanf("%d", &score[i][0]);
        index[i][0] = i;
    }

    for (int i = 7; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (score[j][0] < score[j + 1][0]) {
                temp = score[j][0];
                score[j][0] = score[j + 1][0];
                score[j + 1][0] = temp;

                temp = index[j][0];
                index[j][0] = index[j + 1][0];
                index[j + 1][0] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        sum += score[i][0];
        orderedIndex[i][0] = index[i][0];
    }

    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (orderedIndex[j][0] > orderedIndex[j + 1][0]) {
                temp = orderedIndex[j][0];
                orderedIndex[j][0] = orderedIndex[j + 1][0];
                orderedIndex[j + 1][0] = temp;
            }
        }
    }

    printf("%d\n", sum);

    for (int i = 0; i < 5; i++) {
        printf("%d ", orderedIndex[i][0] + 1);
    }

    return 0;
}