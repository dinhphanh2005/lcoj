#include <iostream>
using namespace std;  

int main() {
    int n;  
    cin >> n; 
    n = abs(n);
    for (int i = n; i > 0; i--) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    if (n == 0) {
        cout << "INF";
    }

    return 0;
}