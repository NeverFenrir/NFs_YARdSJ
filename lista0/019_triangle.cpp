/*
Feu un programa que, donat un nombre n, escrigui un “triangle de mida n”.
Entrada

L’entrada consisteix en un natural n.
Sortida

Escriviu n línies, de manera que la línia i contingui i asteriscos.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {cout << '*';}
        cout << '\n';
    }
}
