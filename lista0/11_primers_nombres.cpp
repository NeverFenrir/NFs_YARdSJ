/*
Feu un programa que llegeixi un nombre n, i que escrigui tots els nombres entre 0 i n.

Entrada
L'entrada consisteix en un natural n.
Sortida

Escriviu en ordre tots els naturals entre 0 i n.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 0;
    while(i <= n) {
        cout << i << endl;
        i++;
    }
}