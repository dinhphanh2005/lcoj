#include <iostream>  
#include <iomanip> 
#include <cmath>
using namespace std; 

int factorial(int a) {
    if (a > 0) {
        return a * factorial(a - 1);
    } else {
        return 1;
    }
}

int main() {
    int x, n;
    double sum = 0;  
    cin >> x >> n; 
    for (int i = 1; i <= n; i++) {
        sum += (pow(x, i)) / factorial(i);
    }
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}