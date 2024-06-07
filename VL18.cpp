#include <iostream>
#include <cstring>
#include <algorithm>
// #include <vector>
using namespace std;

/*
int main() {
    string num;
    cin >> num;
    for (int i = num.length(); i >= 0; i--) {
        if (num[i] == '0') {
            num.erase(i);
        }
        cout << num[i];
    }
    return 0;
}
*/

/*
int main() {
    int num;
    cout << "Nhap vao mot so nguyen: ";
    cin >> num;
    int arr[10], i = 0;

    while (num != 0) {
        arr[i] = num % 10;// Lay chu so cuoi cung
        num /= 10; // Loai bo chu so cuoi cung
        i++;//tang bien index cho mang arr
    }
    cout << "So dao nguoc: ";
    for (int j = 0; j<i; j++) {
		cout << arr[j];
    }

    return 0;
}
*/

/*
int main() {
    int num;
    cout << "Nhap vao mot so nguyen: ";
    cin >> num;
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10; // Lay chu so cuoi cung
        reversedNum = reversedNum * 10 + digit;
        num /= 10; // Loai bo chu so cuoi cung
    }

    cout << "So dao nguoc: " << reversedNum <<endl;

    return 0;
}
*/

/*
int main() {
    int num;
    cin >> num;
    string str_num = to_string(num);
    reverse(str_num.begin(), str_num.end());
    long int reversedNum = stol(str_num);
    cout << reversedNum << endl;

    return 0;
}
*/


int main() {
    string num;
    cin >> num;
    int len = num.length();
    if(num[0] == '0'){
        cout << "So ban nhap khong hop le!";
        return 0;
    }
    for(int i = 0; i < len; i++){
        if(num[i] > '9' || num[i] < '0'){
            cout << "So ban nhap khong hop le!";
            return 0;
        }
    }
    
    while(num[len - 1] == '0') {
        --len;
    }
    for(int i = len - 1; i >= 0; --i){
        cout << num[i];
    }

    return 0;
}