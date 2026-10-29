/*
Escriviu un programa que llegeix nombres d’entrada, i els torna a escriure després d’haver sumat 1 
a aquells dígits que fossin parells.

Per exemple, el programa transformarà el nombre 785902 en 795913.

Entrada
L’entrada té un nombre arbitrari de casos.
Cada cas conté un natural positiu en una línia.

Sortida
Per a cada cas, la sortida té una línia 
amb el corresponent nombre resultant de sumar 1 als dígits que siguin parells.

Observació
No es poden utilitzar mètodes d’emmagatzemament massiu d’informació (com per exemple string o vector).
Llegiu els nombres d’entrada un per un sobre variables int, 
per exemple amb cin >> a, i solucioneu el problema manipulant enters amb operacions bàsiques +,-,*,/,%.

Avaluació sobre 10 punts:

Solució lenta: 5 punts.

solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal 
i capaç de superar els jocs de proves públics i privats. 
Entenem com a solució lenta una que no és ràpida, 
però és correcta i capaç de superar els jocs de proves públics.
*/

#include <iostream>
using namespace std;

int function(int n) {
    int r = 0;
    int multiplier = 1;
    while(n!=0) {
        int num = n%10;
        if(num%2==0) {num++; num = num*multiplier;}
        else {num = num*multiplier;}
        r += num;
        n = n/10; multiplier = multiplier*10;
    }
    return(r);
}

int main() {
    int win,r;
    while(cin>>win) {
        r = function(win);
        cout << r << endl;
    }
}