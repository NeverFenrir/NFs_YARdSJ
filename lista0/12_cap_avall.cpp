/*
Feu un programa que llegeixi dos nombres x i y, i que escrigui tots els nombres entre x i y (o entre y i x), de gran a petit.
Entrada

L’entrada consisteix en dos enters x i y.
Sortida

Cal escriure tots els enters entre x i y (o entre y i x), de gran a petit.
*/

#include <iostream>
using namespace std;

int main() {
    int in1, in2;
    cin >> in1 >> in2;

    int x = min(in1, in2);
    int y = max(in1, in2);

    while(y >= x) {
        cout << y << endl;
        y--;
    }
}