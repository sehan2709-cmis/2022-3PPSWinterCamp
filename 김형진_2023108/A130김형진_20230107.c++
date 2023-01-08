#include <iostream>
#include <string.h>
#include <string>
#include <stack>
using namespace std;

int main() {
    int number, numOfCase, sum = 0;
    stack<int> s;

    scanf("%d", &numOfCase);

    for (int i= 0; i < numOfCase; i++) {
        scanf("%d", &number);

        if (number != 0) {
            s.push(number);
        }

        else {
            s.pop();
        }
    }

    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    
    printf("%d\n", sum);

    return 0;
}
