#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"

typedef struct
{
    int data;
} arrayA;

typedef struct
{
    int data;
} arrayB;

int compareA(const void* first, const void* second)
{
	arrayA* a = (arrayA*)first;
	arrayA* b = (arrayA*)second;

	if (a->data < b->data)
		return -1;
	else
		return 1;
	return 0;
}

int compareB(const void* first, const void* second)
{
	arrayB* a = (arrayB*)first;
	arrayB* b = (arrayB*)second;

	if (a->data < b->data)
		return 1;
	else 
		return -1;
	return 0;
}

int main() {
    arrayA *A;
    arrayB *B;
    int numOfCase, result = 0;

    scanf("%d", &numOfCase);

    A = (arrayA*)malloc(sizeof(arrayA) * numOfCase);
    B = (arrayB*)malloc(sizeof(arrayB) * numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d", &A[i].data);
    }

    for (int i = 0; i < numOfCase; i++) {
        scanf("%d", &B[i].data);
    }

    qsort(A, numOfCase, sizeof(A[0]), compareA);
    qsort(B, numOfCase, sizeof(B[0]), compareB);

    for (int i = 0; i < numOfCase; i++) {
        result += A[i].data * B[i].data;
    }

    printf("%d\n", result);

    return 0;
}