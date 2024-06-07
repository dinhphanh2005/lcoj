#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    int result = (-1 + sqrt(n * 8 + 1)) / 2;
    cout << result << endl;
    
    return 0;
}