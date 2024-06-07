#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i += 2) {
        int left = ((i - 1) >= 0) ? arr[i - 1] : 0;
        int right = ((i + 1) < n) ? arr[i + 1] : 0;
        int gap = abs(left - right);
        arr[i] += gap;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}