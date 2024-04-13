#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string exp) {
    stack<char> s;
    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string brac;
    cout << "Enter the string: ";
    getline(cin, brac); // Changed input method to getline for accepting strings with spaces
    if (isValid(brac)) {
        cout << "Expression is valid" << endl;
    } else {
        cout << "Expression is not valid" << endl;
    }
    return 0;
}
