#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    while (a != b) {
        if (a == 0 || b == 0) {
            int c = a + b;
            cout << c << endl;
            return 0;
        }
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    cout << a << endl;

    return 0;
}