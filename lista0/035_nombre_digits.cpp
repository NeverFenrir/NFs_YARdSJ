/*
nombre de digits d'un natural n, int nombre_digits(int n)
*/

#include <iostream>
using namespace std;

int nombre_digits(int n) {
    int compt = 0;
    if (n <= 9) {return 1;}
    else {return (compt += 1 + nombre_digits(n / 10));}
}

int main() {
    int a;
    cin >> a;
    cout << nombre_digits(a) << endl;;
}