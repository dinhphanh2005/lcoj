#include <iostream>
using namespace std;

int main() {
    int n, sum = 0; 
    cin >> n;
    for (int i = 2; i <= n; i++) {
        sum += i;
    }
    sum = sum + (2 * n);
    cout << sum << endl;

    return 0;
}