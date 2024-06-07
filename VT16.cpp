#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[1000];
    int i = 0;
    do {
        i++; 
        cin >> a[i];
    } while (a[i] != 0);
    int count = 0;
    for (int j = 0; j < i; j++) {
        if (a[j] < 0) {
            count++;
            cout << a[j] << " ";
        }
    }
    cout << endl;
    if (count == 0) {
        cout << "NOT FOUND" << endl;
    } 

    return 0;
}
