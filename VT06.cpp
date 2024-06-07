#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, sum = 0, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
            count++;
        }
    }
    double average = (double)sum / count;
    cout << fixed << setprecision(4) << average << endl;

    return 0;
}