
/*
Feu un programa que llegeixi una seqüència de caràcters acabada en punt i que digui si té alguna ‘a’ minúscula o no.

Entrada
L’entrada consisteix en una seqüència de caràcters acabada en ‘.’.

Sortida
Cal escriure una línia amb “si” o “no”, depenent de si ‘a’ apareix a la seqüència o no.
*/

#include <iostream>
using namespace std;

int main() {
    char win;
    bool found = false;
    cin >> win;
    while((win != '.') and (not found)) {
        if (win == 'a') {found = true;}
        cin >> win;
    }
    
    if(found) {cout << "si" << endl;}
    else {cout << "no" << endl;}
}