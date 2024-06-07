#include <iostream>
using namespace std; 

int main() {
    int n, sum; 
    cin >> n; 
    
    for (int i = 1; i <= (3 * n) + 1; i++) {
        if (n % 2 == 0) {
            sum = (3 * n / 2) + 1;
        } else {
            sum = -1 * ((3 * n) + 1) / 2;
        } 
    }
    cout << sum << endl;

    return 0;
}