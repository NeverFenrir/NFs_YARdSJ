/*
Feu un programa que llegeixi una seqüència de naturals i que indiqui la posició del primer nombre parell.

Entrada
L’entrada consisteix en una seqüència de naturals que conté, com a mínim, un nombre parell.

Sortida
Cal escriure la posició del primer nombre parell de la seqüència.
*/

#include <iostream>
using namespace std;

int main() {
    int win;
    int i = 0;
    bool found = false;
    while((cin>>win) and (not found)) {
        i++;
        if(win%2==0) {
            found = true;
            cout << i;
        }
    }
    cout << endl;
}
