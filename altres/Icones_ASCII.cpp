/*
ICONES ASCII

p i q enters codifiquen una línia
En la representació en base 2 de p, els valors 1 = '#'
En la representació en base 2 de q, els valors 1 = '.'
Si 0 en ambdos, ' ',
p prioritari


Entrada
n, seguit de n secuencies de 40 enters (2 per fila)

Soritda
icones
*/

#include <iostream>
using namespace std;


void print_line(int p, int q) {
    int pendientes = 0;          // spaces accumulated but not yet printed
    int potencia = 524288;       // 2^19, the leftmost bit

    for (int i = 1; i <= 20; i++) {
        int bit_p = (p / potencia) % 2;
        int bit_q = (q / potencia) % 2;

        if (bit_p == 1 or bit_q == 1) {
            for (int k = 1; k <= pendientes; k++) {cout << ' ';}
            pendientes = 0;
            if (bit_p == 1) {cout << '#';} // p has priority
            else {cout << '.';}
        } 
        else {
            pendientes++;
        }
        potencia = potencia / 2;   // move to the next bit
    }
}

void print_icon() {
    for(int i=1; i<=20; i++) {
        int p, q;
        cin >> p >> q;
        print_line(p, q);
        cout << endl;
    }
    
}

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        print_icon();
        cout << endl;
    }
}