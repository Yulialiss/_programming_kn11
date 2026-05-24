#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool areBracketsBalanced(string expr) {
    stack<char> s;
    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            s.push(expr[i]);
            continue;
        }
        
        if (expr[i] == ')' || expr[i] == ']' || expr[i] == '}') {
            if (s.empty()) return false;
            
            char top = s.top();
            if ((expr[i] == ')' && top == '(') ||
                (expr[i] == ']' && top == '[') ||
                (expr[i] == '}' && top == '{')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    // Лабораторна робота №7 (АСД)
    // Студент: Сосновський Максим, КН-11
    // Варіант: 13
    
    string expression;
    cout << "Enter an expression to check brackets: ";
    getline(cin, expression);

    cout << "---------------------------------------" << endl;
    if (areBracketsBalanced(expression)) {
        cout << "Result: Brackets are balanced correctly." << endl;
    } else {
        cout << "Result: Brackets are NOT balanced!" << endl;
    }

    return 0;
}
