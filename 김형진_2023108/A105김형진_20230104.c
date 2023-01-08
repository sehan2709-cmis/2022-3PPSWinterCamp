#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int input, up = 1, down = 1;
    bool status = false, reachMaxStatus = true;

    scanf("%d", &input);

    for (int i = 1; i < input; i++) {
        if (reachMaxStatus) {
            if (!status) {
                down++;
            }

            else {
                up++;
            }
            reachMaxStatus = !reachMaxStatus;
        }

        else {

            if (status) {
                down++;
                up--;
            }

            else {
                down--;
                up++;
            }

            if (up == 1 || down == 1) {
                status = !status;
                reachMaxStatus = !reachMaxStatus;
            }
        }
    }

    printf("%d/%d\n", up, down);

    return 0;
}