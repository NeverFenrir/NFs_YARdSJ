/*
Feu un programa que llegeixi una lletra i que l’escrigui en minúscula si era majúscula, o l’escrigui en majúscula si era minúscula.

Entrada
L’entrada consisteix en una lletra.

Sortida
Cal escriure una línia amb la lletra en minúscula si era majúscula, o en majúscula si era minúscula.
*/

/* 
TABLA ASCII:
Majúscules: (65,90)
Minúscules: (97,122)
Diferència entre un caràcter en min i en majus: 32
*/

#include <iostream>
using namespace std;

int main() {
    // define variables and input the letter in "a", convert the input to its ascii index in "x"
    char a;
    int x;
    cin >> a;
    x = int(a);

    if ((x>=65) and (x<=90)) {
        // si if retorna true, la lletra es majúscula, retornar majus.
        cout << char(x+32) << endl;
    }
    else if ((x>=97) and (x<=122)) {
        // si if retorna true, la lettra es minúscula, retornar minus.
        cout << char(x-32) << endl;
    }
    else {
        cout << "Error" << endl;
    }
}