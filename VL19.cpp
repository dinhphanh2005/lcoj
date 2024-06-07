#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, dem = 0;
    cin >> a >> b;
    if (b >= a) {
        for (int i = b - 1; i > a; i--) {
            if (i % 3 == 0) {
                dem++;
                cout << i << " ";
            }
        }
    }
    if (dem == 0) {
        cout << "NOT FOUND" << endl;
    }
    

    return 0;
}