/*
Feu un programa que calculi potències.
Entrada

L’entrada consisteix en diversos parells d’enters a i b. Assumiu b≥0.
Sortida

Per a cada parell a,b, cal escriure ab. Suposeu, com és habitual, que 00=1.
*/

#include <iostream>
using namespace std;

int main() {
    
    int b, e, r;
    r = 1;
    while(cin >> b >> e) {
        for(int i = 1; i <= e; i++) {
            r = r * b;
        }
        cout << r << endl;
        r = 1;
    }
}
