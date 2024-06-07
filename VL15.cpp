#include <iostream>  
using namespace std;  

int main() {
    int a, b, temp; 
    cin >> a >> b; 
    if (b == 0) {
        cout << "INVALID";
    } else if (a == b) {
        cout << a / b;
    } else if (a == 0) {
        cout << a / b; 
    } else {
        int c = abs(a);
        int d = abs(b);
        while (d != 0) {
            int remainder = c % d;
            c = d;
            d = remainder;
        }
        temp = c;

        if (abs(b) == temp) {
            cout << a / b; 
        } else {
            if (temp == 1) {
                cout << "INVALID";
            } else {
                int sign = (a * b) / abs(a * b);
                a = sign * (abs(a) / temp);
                b = abs(b) / temp;
                cout << a << " " << b << endl;
            }
        }
    }

    return 0;
}