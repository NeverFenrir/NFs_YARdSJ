/*
Feu un programa que llegeixi tres nombres i que n’escrigui el mínim.

Entrada
L’entrada consisteix en tres enters diferents.

Sortida
Cal escriure una línia amb el mínim dels tres nombres.
*/

#include <iostream>
using namespace std;

int main() {
    // declare input variables
    int a,b,c;

    // ask for input
    cin >> a >> b >> c;


    // chain of if statements to check
    // if each individual input is smaller than the other 2 inputs
    if ((a<b) and (a<c)) {
        cout << a << endl;
    }
    else if ((b<a) and (b<c)) {
        cout << b << endl;
    }
    else {
        cout << c << endl;
    }
}