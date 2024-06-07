#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        double j = 1 / (double)i;    
        sum += j;
    }
    cout << fixed << setprecision(4) << sum << endl;

    return 0;
}