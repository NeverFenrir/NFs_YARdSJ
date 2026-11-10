/*
Engreixar un nombre 7 -> 7, 32523185692 -> 33555588899
*/


#include <iostream>
#include <math.h>
using namespace std;

int engreixa(int x) {
    if (x < 10) return x;
    int r = engreixa(x / 10);
    return r * 10 + max(r % 10, x % 10);
}

int main() {
    int a;
    cin >> a;
    cout << engreixa(a) << endl;
}