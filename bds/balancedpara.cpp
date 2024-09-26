#include <iostream>
using namespace std;

int main() {
    string expr;
    int rou = 0, curl = 0, sq = 0;

    cout << "Enter  expression: ";
    cin >> expr;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (ch == '(') {
            rou++;
        } else if (ch == ')') {
            rou--;
            if (rou < 0) {
                cout << "The exp isn't  have balance" << endl;
                return 0;
            }
        } else if (ch == '{') {
            curl++;
        } else if (ch == '}') {
            curl--;
            if (curl < 0) {
                cout << "The exp isn't  have balance." << endl;
                return 0;
            }
        } else if (ch == '[') {
            sq++;
        } else if (ch == ']') {
            sq--;
            if (sq < 0) {
                cout << "The exp isn't  have balance" << endl;
                return 0;
            }
        }
    }

    if (rou == 0 && curl == 0 && sq == 0) {
        cout << "The expression is balanced ." << endl;
    } else {
        cout << "The exp isn't  have balance" << endl;
    }

    return 0;
}