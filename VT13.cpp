#include <iostream>
using namespace std;

void input_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}

void perfect_couple (int a[], int size) {
    int temp = 0;
    int *ptr;
    int *ptr1;
    temp = a[size - 1] + a[0];
    ptr = &a[size - 1];
    ptr1 = &a[0];
    for (int i = 0; i < size; i++) {
        if (temp < (a[i] + a[i + 1])) {
            temp = a[i] + a[i + 1];
            ptr = &a[i];
            ptr1 = &a[i + 1];
        }
        if (temp == (a[i] + a[i + 1])) {
            temp = a[i] + a[i + 1];
            ptr = &a[i];
            ptr1 = &a[i + 1];
        }
    }
    cout << *ptr << " " << *ptr1 << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    input_array(a, n);
    perfect_couple(a, n);

    return 0;
}