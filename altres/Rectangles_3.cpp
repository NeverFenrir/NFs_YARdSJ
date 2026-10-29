/*
Feu un programa que escrigui k rectangles nxm.
Escriviu cada rectangle de forma independent, i ompliu-lo amb un 9, désprés un 8, …, després un 0, etcètera.

Entrada
L’entrada consisteix en tres naturals k, n i m

Sortida
Escriviu k rectangles de mida nxm,
omplint-lo amb 9,8,…0, 9, …. Separeu dos rectangles amb una línea en blanc.
*/

#include <iostream>
using namespace std;

void print_line(int m, int& first) {
    for(int i=1; i<=m; i++) {
        cout << first;
        if(first > 0) {first--;}
        else if(first==0) {first = 9;}
    }
}

void print_rectangle(int n, int m) {
    int first = 9;
    for(int i=1; i<=n; i++) {
        print_line(m, first);
        cout << endl;
    }
}

int main() {
    int k,n,m;
    cin >> k >> n >> m;
    for(int i=1; i<=k; i++) {
        print_rectangle(n, m);
        if(i==k) {}
        else {cout << endl;}
    }
}
