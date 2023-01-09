#include <iostream>
#include "stdlib.h"
#include "stdio.h"
#include <string.h>
#include <string>
#include "stdbool.h"
using namespace std;

int main() {
    int numOfCase;
    float num, result = 0;
    string line;

    scanf("%d", &numOfCase);

    for (int i = 0; i < numOfCase; i++) {
        cin >> num;
        result = num;
        getline(cin, line);

        for (int j = 0; j < line.length(); j++) {
            if (line[j] == '@') {
                result = result * 3;
            }

            else if (line[j] == '%') {
                result = result + 5;
            }

            else if (line[j] == '#') {
                result = result - 7;
            }
        }

        printf("%.2f\n", result);
    }
    
    return 0;
}