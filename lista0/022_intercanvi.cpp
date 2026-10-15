/*
Escriviu un procediment
    void swap2(int& a, int& b);

que intercanvïi el valor dels seus paràmetres.
*/

#include <iostream>
using namespace std;


void swap2(int& a, int& b) {
    // PRE: referència a variables a i b; a=x i b=y, on 'x' i 'y' son valors qualsevol
    // POSt: a=y i b=x
    int temp = a;
    a = b;
    b = temp;
}

int main() {}
