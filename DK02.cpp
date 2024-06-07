#include <iostream>
using namespace std;

int max_of_three(int a, int b, int c) {
    int max = (a > b && a > c) ? a : (b > c) ? b : c;

    return max; 
}

int main() {
    int a, b, c;  
    cin >> a >> b >> c;
    int ans = max_of_three(a, b, c);
    cout << ans << endl;

    return 0;
}