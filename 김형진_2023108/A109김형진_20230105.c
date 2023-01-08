#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

typedef struct
{
	int first;
	int second;
	int cycle;
}list;

int main() {
    list* member;
    int numOfCase, direction, number = 1;

    scanf("%d", &numOfCase);

    member = (list*)malloc(numOfCase * sizeof(list));

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d %d %d", &member[i].first, &member[i].second, &member[i].cycle);
        if (i == 0) {
            direction = member[i].cycle;
        }
    }

    for (int i = 0; i < numOfCase; i++) {
        number = number * member[i].second / member[i].first;
        if (member[i].cycle == 1 && i > 0) {
            direction = !direction;
        }
    }

    printf("%d %d\n", direction, number);

    return 0;
}
