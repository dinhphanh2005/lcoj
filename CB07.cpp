#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r; 
    cin >> r;
    const double pi = 3.14;
    double c = 2 * pi * r;
    double s = pi * pow(r, 2);
    cout << fixed << setprecision(3) << c << " ";
    cout << fixed << setprecision(3) << s << endl;

    return 0;
}