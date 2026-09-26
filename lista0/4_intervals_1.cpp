/*
Feu un programa que, donats dos intervals, en calculi l’interval corresponent a la intersecció o indiqui que aquesta és buida.

Entrada
L’entrada consisteix en quatre enters a1, b1, a2, b2
 que representen els intervals [a1, b1] [a2,b2], assumint a1<=b1 i a2<=b2

Sortida
Cal escriure “[]” si els intervals no tenen intersecció, o bé “[x,y]
si aquesta és la seva intersecció no buida.
*/

#include <iostream>
using namespace std;

int main() {
    // declare vars
    int a1, b1, a2, b2;
    int x, y;
    
    // input of the intervals [a1,b1], [a2,b2]
    cin >> a1 >> b1 >> a2 >> b2;
    
    // obtain the to create the new intersection interval by doing 
    // max() of the first pair of numbers and min of the second pair of numbers in each interval
    x = max(a1,a2);
    y = min(b1,b2);

    // if x>y the intersection the inersection is not valid therefore return an empty interval,
    // else return the new inverval
    if(x>y) {
        cout << "[]" << endl;
    }
    else {
        cout << "[" << x << "," << y << "]" << endl;
    }
    return 0;
}