#include <bits/stdc++.h>
using namespace std;

int a[3] = {1, 2, 3};

int main(){

    // decay
    int * b = &a[0];
    int * c = a; 

    cout << b << "\n";
    cout << c << "\n";
    /*
    0x102af8000
    0x102af8000
    */

    cout << &a[1] << "\n";
    cout << (c + 1) << "\n";
    /*
    0x7ff69c903004
    0x7ff69c903004
    */

    return 0;
}

