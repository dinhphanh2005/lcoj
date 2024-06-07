#include <iostream>
using namespace std;

void input_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}

void bubble_sort(int a[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int multi_max(int a[], int size) {
    int result = a[0] * a[1];
    if (result < a[size - 1] * a[size - 2]) {
        result = a[size - 1] * a[size - 2];
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    input_array(a, n);
    bubble_sort(a, n);
    cout << multi_max(a, n) << endl;

    return 0;
}
