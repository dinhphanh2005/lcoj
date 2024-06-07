#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long int a; 
    cin >> a;
    double b = sqrt(a);
    if (b == (int)b) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}