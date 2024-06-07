#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a; 
    cin >> a; 
    int b = (abs(a - (int)a) * 10); 
    if (a > 0) {
        if (b >= 5) {
            int c = ceil(a);
            cout << c;
        } else if (b < 5) {
            int c = floor(a);
            cout << c;
        }
    } 
    if (a < 0) {
        if (b >= 5) {
                int c = floor(a);
                cout << c;
            } else if (b < 5) {
                int c = ceil(a);
                cout << c; 
            }
    }

    return 0;
}