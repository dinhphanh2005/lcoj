#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;  
    cin >> a >> b; 
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    double divide = (double)a / (double)b;
    if (a == 0 || b == 0) {
        cout << "ERROR";
    } else {
        cout << fixed << setprecision(2) << divide << endl;
    }

    return 0;
}