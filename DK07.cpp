#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;  
    cin >> a >> b >> c; 
    double delta = pow(b, 2) - 4 * a * c;
    if (a == 0) {
        if (b != 0) {
            double x = (0 - (double)c) / (double)b;
            cout << fixed << setprecision(2) << x << endl;
        } else if (b == 0 && c == 0) {
            cout << "WOW";
        } else if (b == 0 && c != 0) {
            cout << "NO";
        }
    } else {
        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 > x2) {
                cout << fixed << setprecision(2) << x2 << " ";
                cout << fixed << setprecision(2) << x1;
            } else {
                cout << fixed << setprecision(2) << x1 << " ";
                cout << fixed << setprecision(2) << x2;
            }
        } else if (delta == 0) {
            double x = -b / (2 * a);
            cout << fixed << setprecision(2) << x;
        } else if (delta < 0) {
            cout << "NO";
        }
    }
}