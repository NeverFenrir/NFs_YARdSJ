/*
Feu una funció que, donats quatre enters a, b, c i d, en retorni el màxim.
*/

#include <iostream>
using namespace std;


int max2(int x, int y) {
    // PRE: a i b, enters
    // POST: si a>b, retorna a; si no, retorna b
    if(x>y) {return x;}
    else {return y;}
}

int max4(int a, int b, int c, int d) {
    // PRE: a, b, c i d, enters
    // POST: retorna z on: (z=a o z=b o z=c o z=d) i (z>=a, z>=b, z>=c, z>=d)
    int temp1, temp2;
    temp1 = max2(a,b);
    temp2 = max2(c,d);
    return(max2(temp1,temp2));
}

int main() {}
