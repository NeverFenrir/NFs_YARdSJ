/*
Escribe el promedio de dos números enteros.

Entrada
Una línea con dos números enteros entre -1000 y 1000, separados por un espacio.

Salida
Escribe una línea con el promedio de ambos números.
Observación

No te olvides de escribir el salto de línea al final de tu salida, o tu programa será considero incorrecto (Error de Formato).*/

#include <iostream>
using namespace std;

int main() {
    int x,y;
    double prom;
    cin >> x >> y;

    prom = double(x+y) / 2;
    
    cout << prom << endl;
}