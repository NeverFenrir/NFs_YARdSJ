/*
Feu un programa que, donat un enter i, i una sequència de naturals X1...Xn, retorni l'enter en la posició Xi

Entrada
Nombre i, seguit d'una sequència de naturals acabada en -1

Sortida
Cal escriure el contingut de la posició i segons es mostra als exemples.
*/

#include <iostream>
using namespace std;

int main() {
    int i, win;
    cin >> i;

    cin >> win;
    int compt = 1;
    while((compt < i) and (win != -1)) {
        cin >> win;
        compt++;
    }
    cout << "A la posicio "<< i << " hi ha un " << win << '.'<< endl;
}