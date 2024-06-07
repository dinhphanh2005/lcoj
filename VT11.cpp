#include <iostream>
using namespace std;

void sort(int a[], int size) {
    int temp; 
    for (int i = 0; i < size - 2; i++) {
        for (int j = 1; j < size - i - 2; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


bool check(int a[], int size) {
    bool sorted = true;
    for (int i = 1; i < size - 2; i++) {
        if (a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    return sorted;
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, n);
    bool sorted = check(arr, n);
    cout << sorted << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}