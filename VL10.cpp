#include <iostream>  
#include <cstring>
using namespace std;  

int main() {
    char n[10000];
    cin >> n;  
    int len = strlen(n);
    if (strchr(n, '-') != NULL) {
        len -= 1;
    }
    cout << len;

    return 0;
}