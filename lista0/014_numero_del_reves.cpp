/*
Feu un programa que llegeixi un nombre i que l’escrigui del revés.
Entrada

L’entrada consisteix en un natural.
Sortida

Escriviu el número del revés, amb tants zeros a l’esquerra com té a la dreta.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n >= 10) {
        cout << (n%10);
        n = n/10;
    }
    
    cout << n << endl;
}