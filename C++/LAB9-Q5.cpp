#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());
    for (char &c : infix) {
        if (c == '(') c = ')';
        else if (c == ')') c = '(';
    }

    stack<char> s;
    string prefix;

    for (char c : infix) {
        if (isalpha(c)) {
            prefix += c; // Append operands
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                prefix += s.top();
                s.pop();
            }
            s.pop(); // Remove '('
        } else {
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                prefix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Prefix expression: " << infixToPrefix(infix) << endl;
    return 0;
}
