#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (year > 0 && year <= 100000) {
        if (year % 4 == 0 && year % 100 != 0) {
            cout << "YES";
        } else if (year % 100 == 0 && year % 400 == 0) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "INVALID";
    }
}