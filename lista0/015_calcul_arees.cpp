/*
Feu un programa que llegeixi diverses descripcions de rectangles i de cercles, i que per a cadascuna n’escrigui l’àrea corresponent.
Entrada

L’entrada comença amb un nombre n, seguit de n descripcions. Si és d’un rectangle, es té la paraula “rectangle” seguida de dos reals estrictament positius que n’indiquen la llargada i l’amplada. Si és d’un cercle, es té la paraula “cercle” seguida d’un real estrictament positiu que n’indica el radi.
Sortida

Per a cada descripció, escriviu-ne l’àrea amb 6 decimals.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << std::fixed;
    cout.precision(6);
    
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        string type;
        double in1, in2, area;
        
        cin >> type >> in1;
        if(type=="rectangle") {
            cin >> in2;
            area = in1 * in2;
        }
        else if(type=="cercle") {
            area = M_PI * in1 * in1;
        }

        cout << area << endl;
    }
}
