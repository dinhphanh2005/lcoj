#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if ((a >= 'a' && a <= 'z') && (b >= 'a' && b <= 'z')) {
        a -= 32;
        b -= 32;
        if (b >= a) {
            for (int i = a; i <= b; i++) {
                cout << (char)i << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}