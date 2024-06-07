#include <iostream>
using namespace std; 

int main() {
    int a, b, sum = 0; 
    cin >> a >> b; 
    while (a < b) {
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        break;
    }
    cout << sum << endl;

    return 0;
}