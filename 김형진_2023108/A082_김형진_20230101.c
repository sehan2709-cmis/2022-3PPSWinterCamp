#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int age;
	int idx;
	char name[101];
}member;

int compare(const void* first, const void* second)
{
	member* a = (member*)first;
	member* b = (member*)second;

	if (a->age < b->age)
		return -1;
	else if (a->age > b->age)
		return 1;
	else
	{
		if (a->idx < b->idx)
			return -1;
		else
			return 1;
	}
	return 0;
}

int main()
{
	int i, n;
	member* list;

	scanf("%d", &n);
	list = (member*)malloc(n * sizeof(member));

	for (i = 0; i < n; i++)
	{
		scanf(" %d %s", &list[i].age, list[i].name);
		list[i].idx = i;
	}

	qsort(list, n, sizeof(list[0]), compare);

	for (i = 0; i < n; i++)
	{
		printf("%d %s\n", list[i].age, list[i].name);
	}

	return 0;
}

/*
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main() {
    int numOfCase, *age, temp, i, j;
    char tempName[201];
    char** name;
    char* temp2;

    scanf("%d", &numOfCase);

    name = (char**)malloc(sizeof(char*) * numOfCase);
    age = (int*)malloc(sizeof(int) * 1);

    for (i = 0; i < numOfCase; i++) {
        scanf("%d %s", &age[i], tempName);
        name[i] = (char*)malloc(sizeof(char) * strlen(tempName));
        strcpy(name[i], tempName);
    }

    for (i = numOfCase - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (age[j] > age[j + 1]) {
                temp = age[j];
                age[j] = age[j + 1];
                age[j + 1] = temp;

                temp2 = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp2;
            }
        }
    }

    for (i = 0; i < numOfCase; i++) {
        printf("%d %s\n", age[i], name[i]);
    }

    return 0;
}
*/