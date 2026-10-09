/*
Feu un programa que llegeixi una seqüència de caràcters acabada en punt i que escrigui quantes lletres ‘a’ conté.
Entrada

L’entrada consisteix en una seqüència de caràcters acabada en punt.
Sortida

Cal escriure el nombre de vegades que ‘a’ apareix a la seqüència.
*/

#include <iostream>
using namespace std;

int main() {
    char win;
    int compt = 0;
    
    cin >> win;
    while(win != '.') {
        if(win == 'a') {
            compt++;
        }
        cin >> win;
    }
    cout << compt << endl;
}
