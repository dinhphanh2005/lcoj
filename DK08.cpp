#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;  
    char op;
    cin >> a >> op >> b;
    switch(op) {
        case '+':
            cout << fixed << setprecision(2) << (double)(a + b);
            break;
        case '-':
            cout << fixed << setprecision(2) << (double)(a - b);
            break;
        case '*':
            cout << fixed << setprecision(2) << (double)(a * b);
            break;
        case '/': 
            if (b == 0) {
                cout << "Math Error";
                break;
            } else {
                cout << fixed << setprecision(2) << (double)(a / b);
                break;
            }
        default:
            cout << "Math Error";
    }

    return 0;
}