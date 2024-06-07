#include <iostream> 
using namespace std;  
int gcd(int a, int b) {
    if (a == 0 || b == 0) {
        return a + b;
    } else {
        return gcd(b % a, a);
    }
}

int main() {
    int a, b;  
    cin >> a >> b; 
    a = abs(a); 
    b = abs(b); 
    int lcm = (a * b) / gcd(a, b);
    cout << lcm;
    
    return 0;
}