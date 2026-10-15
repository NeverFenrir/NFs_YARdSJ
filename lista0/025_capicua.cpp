/*
Feu una funció que digui si un natural @n@ és capicua o no.

Interfície
bool es_capicua(int n);
*/

#include <iostream>
using namespace std;

int invertir(int x) {
    int inv_x = 0;
    while(x != 0) {
        // AQUESTA FUNCIÓ NO CONSIDERA ELS CASOS ON HI HA 0s A L'ESQUERRA O DRETA DEL NOMBRE
        // add last digit to inv_x and shift left (*10)
        inv_x += x%10;
        inv_x = inv_x * 10;
        //remove digit from original
        x = x/10;
    }
    return(inv_x/10);
}

bool es_capicua(int n) {
    return (n == invertir(n));
}

int main() {}