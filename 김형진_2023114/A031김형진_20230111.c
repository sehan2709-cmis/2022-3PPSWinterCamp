#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

int main() {
    int width, height;

    scanf("%d %d", &width, &height);

    printf("%d\n", width * height - 1);

    return 0;
}