/*

Escriviu una funció
    bool es_potencia_de_3(int n);

que retorni cert si i només si el natural @n@ és una potència de 3. Per exemple, la funció hauria de retornar cert per a 1, 3, 9, 27, 81, etcètera, i retornar fals per a 0, 2, 4, 5, 6, 7, 8, 10, etcètera.
Precondició

Es compleix @n@ ≥0.
*/

#include <iostream>
using namespace std;

bool es_potencia_de_3(int n) {
    bool result;
    while (n>0) {
        if(n==1) {
            result = true;
            break;
        }
        
        else if(n%3 == 0) {
            n = n/3;
        }

        else {
            result = false;
            break;
        }
    }
    return result;
}

int main() {}