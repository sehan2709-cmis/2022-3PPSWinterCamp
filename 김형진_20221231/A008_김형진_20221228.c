#include "stdlib.h"
#include "stdio.h"

int main() {
    int numOfCase, numOfStudent, sum = 0, count = 0, score, scores[1000] = {0};
    float result, avg;

    scanf("%d", &numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d", &numOfStudent);

        for (int j = 0; j < numOfStudent; j++) {
            scanf("%d", &score);
            sum += score;
            scores[j] = score;
        }

        avg = sum / numOfStudent;

        for (int j = 0; j < numOfStudent; j++) {
            if (scores[j] > avg) {
                count++;
            }
        }

        result = ((float)count / (float)numOfStudent) * 100;
        sum = 0;
        count = 0;

        printf("%.3f%%\n", result);
    }

    return 0;
}