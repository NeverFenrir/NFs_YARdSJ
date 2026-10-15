/*
Feu una funció que, donats dos enters a i b, en retorni el màxim.

Interfície
C++	
int max2(int a, int b);
*/

#include <iostream>
using namespace std;


int max2(int a, int b) {
    // PRE: a i b, enters
    // POST: si a>b, retorna a; si no, retorna b
    if(a>b) {return a;}
    else {return b;}
}

int main() {}
