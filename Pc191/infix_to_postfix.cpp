#include <bits/stdc++.h>
using namespace std;

// Function to determine precedence of operators
int pre(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0; // Default for non-operators
}

// Function to check if a character is an opening bracket
bool isOpeningBracket(char ch) {
    return ch == '(' || ch == '{' || ch == '[';
}

// Function to check if a character is a closing bracket
bool isClosingBracket(char ch) {
    return ch == ')' || ch == '}' || ch == ']';
}

// Function to check if a pair of brackets match
bool isMatchingBracket(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main() {
    string infix;
    string postfix = "";
    stack<char> st;

    cout << "Enter the infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.size(); i++) {
        char now = infix[i];

        // If the character is an operand, append it to the postfix result
        if ((now >= 'a' && now <= 'z') || (now >= 'A' && now <= 'Z')) {
            postfix += now;
        }
        // If the character is an opening bracket, push it onto the stack
        else if (isOpeningBracket(now)) {
            st.push(now);
        }
        // If the character is a closing bracket
        else if (isClosingBracket(now)) {
            while (st.size() && !isOpeningBracket(st.top())) {
                postfix += st.top();
                st.pop();
            }
            // Pop the matching opening bracket
            if (st.size() && isMatchingBracket(st.top(), now)) {
                st.pop();
            } else {
                cout << "Error: Mismatched parentheses!" << endl;
                return 1; // Exit with an error
            }
        }
        // If the character is an operator
        else {
            while (st.size() && pre(st.top()) >= pre(now)) {
                postfix += st.top();
                st.pop();
            }
            st.push(now);
        }
    }

    // Pop all remaining operators from the stack
    while (st.size()) {
        if (isOpeningBracket(st.top())) {
            cout << "Error: Mismatched parentheses!" << endl;
            return 1; // Exit with an error
        }
        postfix += st.top();
        st.pop();
    }

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
