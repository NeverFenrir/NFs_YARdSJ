/*
Feu un programa que llegeixi una seqüència de naturals i, per a cadascun, digui si és un nombre primer o no. 
Recordeu que un natural és primer si i només si és més gran que 1 i no té cap divisor positiu que no sigui 1 o ell mateix.

Entrada
L’entrada consisteix en un nombre n, seguit de n naturals.

Sortida
Per a cada natural donat, escriviu en una línia si és primer o no, seguint el format de l’exemple.

Pista
Per a cada nombre n, calen com a màxim uns sqrt(n) passos per saber si és primer o no.
*/

#include <iostream>
#include <math.h>
using namespace std;


bool esprimer(int x) {
    int compt = 0;
    int a = sqrt(x);
    int n = 2;
    bool trob = false;
    while((compt<a) and (not trob)) {
        if((x%n==0) and (x!=n)) {trob = true;}
        else{n++; compt++;}
    }
    return(not trob);
}

int main() {
    int n,win;
    cin >> n;

    for(int i=1; i<=n; i++) {
        cin >> win;
        if(win<=1) {
            cout << win << " no es primer" << endl;
        }
        
        else if(esprimer(win)) {
            cout << win << " es primer" << endl;
        }

        else{
            cout << win << " no es primer" << endl;
        }
    }
}