#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "math.h"

typedef struct
{
    int data;
}array;

typedef struct
{
    int data;
}array2;

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

int compare2(const void* first, const void* second)
{
	array2* a = (array2*)first;
	array2* b = (array2*)second;

	if (a->data < b->data)
		return -1;
	else
		return 1;

	return 0;
}

int main() {
    int numOfCase, sum = 0, middle, frequent, range, list[8001] = {0}, count = 0, max = -1;
    double mean;
    array* input;
    array2 list2[8001];

    scanf("%d", &numOfCase);
    input = (array*)malloc(sizeof(array) * numOfCase);

    for (int i = 0; i< numOfCase; i++) {
        scanf("%d", &input[i].data);
        sum += input[i].data;
        list[input[i].data + 4000]++;
    }

    qsort(input, numOfCase, sizeof(input[0]), compare);
    mean = round(sum / (double)numOfCase);
    middle = input[numOfCase / 2].data;
    range = abs(input[numOfCase - 1].data - input[0].data);
    max = list[0];

    if (mean == -0) {
        mean = 0;
    }

    for (int i  = 0; i < 8001; i++) {
        if (list[i] > max) {
            max = list[i];
            count = 1;
            list2[count - 1].data = i - 4000;
            frequent = i - 4000;
        }

        else if (list[i] == max) {
            count++;
            list2[count - 1].data = i - 4000;
        }
    }

    if (count != 1) {
        qsort(list2, count, sizeof(list2[0]), compare);
        frequent = list2[1].data;
    }

    printf("%.f\n%d\n%d\n%d\n", mean, middle, frequent, range);

    return 0;
}