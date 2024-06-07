# include <iostream>
using namespace std;

int main() {
    int n, max = 0; 
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[max] <= arr[i]) {
            max = i;
        }
    }
    cout << max << endl;
    
    return 0;
}