#include <iostream>
using namespace std;

// C1: tim min max cua mang roi tru
void input_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}

int find_max(int a[], int size) {
    int max = a[0];
    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
        } 
    }
    return max;
}

int find_min (int a[], int size) {
    int min = a[0];
    for (int i = 0; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    input_array(a, n);
    int result = find_max(a, n) - find_min(a, n);
    cout << result << endl;
    
    return 0;
}

// C2: sap xep mang theo thu tu tang dan hoac giam dan roi lay phan tu dau va cuoi tru cho nhau
void bubble_sort(int a[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n; 
    cin >> n; 
    int a[n];
    input_array(a, n);
    bubble_sort(a, n);
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = abs(a[n - 1] - a[0]);
    }
    cout << result << endl;

    return 0;
}