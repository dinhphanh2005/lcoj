#include <iostream>
using namespace std;

int main() {
    int n = 11;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool found = false;
    for (int i = 0; i < n - 1; i++) {
        if (arr[10] == arr[i]) {
            cout << i + 1 << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "-1";
    }
}