#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;  
    cin >> a >> b; 
    if (a != 0) {
        double x = (0 - (double)b) / (double)a;
        cout << fixed << setprecision(2) << x << endl;
    } else if (a == 0 && b != 0) {
        cout << "NO";
    } else if (a == 0 && b == 0) {
        cout << "WOW";
    }

    return 0;
}