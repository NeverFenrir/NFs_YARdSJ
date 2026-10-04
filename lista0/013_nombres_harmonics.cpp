/*
Feu un programa que llegeixi un nombre n i que escrigui el nombre harmònic n-èsim, definit com Hn=1/1+1/2+⋯+1/n.
Entrada

L’entrada consisteix en un natural n.
Sortida

Cal escriure Hn amb quatre xifres decimals.
*/

#include <iostream>
using namespace std;

int main() {
    cout << std::fixed;
    cout.precision(4);

    int n;
    cin >> n;

    double denom = 1;
    double num = 0;

    while(denom <= n) {
        num += (1/denom);
        denom++;
    }

    cout << num << endl;
}