#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

typedef struct
{
    int data;
}array;

int compare(const void* first, const void* second)
{
	array* a = (array*)first;
	array* b = (array*)second;

	if (a->data < b->data)
		return -1;
	else
		return 1;

	return 0;
}

int main() {
    int numOfCase, max = -1;
    array* list;

    scanf("%d", &numOfCase);
    list = (array*)malloc(sizeof(array) * numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d", &list[i]);
    }

    qsort(list, numOfCase, sizeof(list[0]), compare);

    for (int i = 0; i < numOfCase; i++) {
        if (max < list[i].data * (numOfCase - i)) {
            max = list[i].data * (numOfCase - i);
        }
    }

    printf("%d\n", max);

    return 0;
}