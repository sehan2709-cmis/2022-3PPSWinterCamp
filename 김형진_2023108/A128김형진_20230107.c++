#include <iostream>
#include <string.h>
#include <string>
#include <stack>
using namespace std;

int main() {
    string line;
    bool isGood = true;
    stack<int> s;

    while (true)
    {
        //fgets(line, sizeof(line), stdin);
        getline(cin, line);

        if (line[0] == '.') {
            break;
        }

        for (int i = 0; i < line.length(); i++) {
            if (line[i] == '.') {
                break;
            }

            if (line[i] == '(') {
                s.push(1);
            }

            else if (line[i] == '[') {
                s.push(2);
            }

            else if (line[i] == ')') {
                if (!s.empty() && s.top() == 1) {
                    s.pop();
                }
                
                else {
                    isGood = false;
                    break;
                }
            }

            else if (line[i] == ']') {
                if (!s.empty() && s.top() == 2) {
                    s.pop();
                }
                
                else {
                    isGood = false;
                    break;
                }
            }
        }

        if (isGood && s.empty()) {
            printf("yes\n");
        }

        else {
            printf("no\n");
        }

        while(!s.empty()) {
            s.pop();
        }
        isGood = true;
    }

    return 0;
}