#include <iostream>  
using namespace std;  

int main() {
    int n, sum = 0;  
    cin >> n; 
    // n = abs(n);
    if (n <= 1) {
        cout << "NO";
    } else {
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i; 
            }
        }
        if (sum == n) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}