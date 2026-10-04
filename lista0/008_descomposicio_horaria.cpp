/*
Feu un programa que, donada una quantitat de segons, digui quantes hores, minuts i segons representa.

Entrada
L’entrada consisteix en un natural n

Sortida
Escriviu tres naturals h, m, s; tals que 3600*h + 60*m + s = n amb m<60 i s<60
*/

#include <iostream>
using namespace std;

int main() {
    int h,m,s;
    int n;
    cin >> n;

    //variables temporals pels restants
    int resh, resm;
    // obtenir hores amb divisió entera i residu
    h = n / 3600;
    resh = n % 3600;

    //obtenir minuts i residu
    m = resh / 60;
    resm = resh % 60;

    //obtenir segons
    s = resm;

    cout << h << " " << m << " " << s << endl;
}