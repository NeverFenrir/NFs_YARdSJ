/*
Feu un programa que passi una quantitat donada d’anys, dies, hores, minuts i segons a segons.
Entrada

L’entrada consisteix en cinc naturals corresponents als anys, dies, hores, minuts i segons, respectivament.
Sortida

Escriviu el nombre total de segons corresponents a l’entrada.
Observació

Podeu assumir que tots els anys tenen 365 dies.
*/

#include <iostream>
using namespace std;

int main() {
    int a, d, h, m, s;
    cin >> a >> d >> h >> m >> s;

    int suma = 31536000*a + 86400*d + 3600*h + 60*m + s;
    cout << suma << endl;
}