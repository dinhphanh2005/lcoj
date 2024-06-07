#include <iostream> 
using namespace std; 

int main() {
    int a, count = 0;
    cin >> a; 
    a = abs(a); 
    for (int i = a; i > 0; i--) {
        if (a % i == 0) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}