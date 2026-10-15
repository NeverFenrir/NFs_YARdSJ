/*
3Feu un procediment
void descompon(int n, int& h, int& m, int& s);

que, donada una quantitat de segons n >= 0,
calculi quantes hores @h@, minuts @m@ i segons @s@ representa.
*/

#include <iostream>
using namespace std;

void descompon(int n, int& h, int& m, int& s) {

    // obtenir hores
    h = n / 3600;
    //obtenir minuts
    m = (n % 3600) / 60;
    //obtenir segons
    s = (n % 3600) % 60;
}
