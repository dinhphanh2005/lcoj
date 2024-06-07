#include <iostream>
using namespace std;

int main() {
    int a, b; 
    cin >> a >> b;  
    if (a < b) {
        int result = abs(a - b);
        cout << result << endl;
    } else {
        int result = a - b;
        cout << result << endl;
    }

    return 0;
}