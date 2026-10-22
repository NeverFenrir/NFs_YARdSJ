/*
Doblegar un numero i sumar una part amb l'altre
per exemple:

12345 -> 345
          21
i retornar el resultat de la suma = 366
*/

#include <iostream>
using namespace std;

int num_length(int x) {
    
    int i = 0;
    while(x>0) {
        i++;
        x = x/10;
    }
    return(i);
}

int invertir(int x) {
    int inv_x = 0;
    while(x != 0) {
        inv_x += x%10;
        inv_x = inv_x * 10;
        x = x/10;
    }
    return(inv_x/10);
}

int obtenir_up(int x) {
    
    int length = num_length(x);
    for(int i=0; i < length/2; i++) {x = x/10;}
    
    return(invertir(x));
}

int obtenir_down(int x) {

    int length = num_length(x);
    int p = 1;
    for (int i = 0; i < length/2; i++) {p *= 10;}
    
    return x % p;
}

int main() {
    int a = 0;
    while(cin>>a) {
        cout << a << " -> " << obtenir_up(a) + obtenir_down(a) << endl;
    }
}