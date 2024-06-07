#include <iostream>
using namespace std;

int main() {
    int n, x;
    int count = 0;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    if (count > 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}