#include "stdlib.h"
#include "stdio.h"

int main() {
    int numOfCase, array[10][1], st = -1, nd = -2, rd = -3;

    scanf("%d", &numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &array[j][0]);
            if (array[j][0] > st) {
                st = array[j][0];
            }
        }

        for (int j = 0; j < 10; j++) {
            if (array[j][0] > nd && array[j][0] < st) {
                nd = array[j][0];
            }
        }

        for (int j = 0; j < 10; j++) {
            if (array[j][0] > rd && array[j][0] < nd) {
                rd = array[j][0];
            }
        }

        printf("%d\n", rd);
        st = -1;
        nd = -2;
        rd = -3;
    }

    return 0;
}