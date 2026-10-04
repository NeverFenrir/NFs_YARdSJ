/*
Se te dan tres enteros A, B , C. Los números no se te dan necesariamente en ese orden, pero sí sabemos que, A<B<C
Simplemente, te pedimos que escribas los tres números en el orden que se te indique.

Entrada
La primera línea contiene tres enteros menores que 100 (los valores de A, B y C, en un orden cualesquiera).
La segunda línea contiene tres letras mayúsculas (’A’, ’B’ y ’C’) representando el orden deseado.

Salida
Escribe una línea con los tres números, en el orden indicado, separados por espacios.
*/

#include <iostream>
using namespace std;

int main() {
    int in1, in2, in3, A, B, C;
    char char1, char2, char3;

    cin >> in1 >> in2 >> in3;
    cin >> char1 >> char2 >> char3;
    
    // determinar A
    if((in1 < in2) and (in1 < in3)) {
        A = in1;
    }
    else if((in2 < in1) and (in2 < in3)) {
        A = in2;
    }
    else {
        A = in3;
    }

    // determinar C
    if((in1 > in2) and (in1 > in3)) {
        C = in1;
    }
    else if((in2 > in1) and (in2 > in3)) {
        C = in2;
    }
    else {
        C = in3;
    }

    //determinar B
    if((in1 != A) and (in1 != C)) {
        B = in1;
    }
    else if((in2 != A) and (in2 != C)) {
        B = in2;
    }
    else {
        B = in3;
    }
    
    
    // print according to each character
    if(char1 == 'A') {
        cout << A << " ";
    }
    else if(char1 == 'B') {
        cout << B << " ";
    }
    else {
        cout << C << " ";
    }
    // ------
    if(char2 == 'A') {
        cout << A << " ";
    }
    else if(char2 == 'B') {
        cout << B << " ";
    }
    else {
        cout << C << " ";
    }
    // ------
    if(char3 == 'A') {
        cout << A << endl;
    }
    else if(char3 == 'B') {
        cout << B << endl;
    }
    else {
        cout << C << endl;
    }

}