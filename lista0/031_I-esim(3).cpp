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

    if(i<=0) {cout<<"Posicio incorrecta." << endl;}
    
    else {
        int compt = 0;
        while((compt<i) and (cin>>win)) {
            compt++;
        }

        if(compt<i) {
            cout << "Posicio incorrecta." << endl;
        }
        else {
            cout << "A la posicio "<< i << " hi ha un " << win << '.'<< endl;
        }
    }
}