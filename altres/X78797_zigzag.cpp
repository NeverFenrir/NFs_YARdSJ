/*
Feu un programa que, donades parelles de naturals positius height, width, on width és nombre parell, generi ziga-zagues com les que es mostren als exemples.

Entrada
Un nombre arbitrari de casos, a on cadascun consisteix en dos naturals positius height, width, on width és parell, en una línia.

Sortida
Per a cada cas, la corresponent ziga-zaga, seguida d’una línia en blanc.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç de superar els jocs de proves públics i privats. Entenem com a solució lenta una que no és ràpida, però és correcta i capaç de superar els jocs de proves públics.
*/

#include <iostream>
using namespace std;

void print_line(int w, int f) {
    int num_s = w/2;
    int num_h = w/2;
    for(int i=0; i<f; i++) {
        cout << '*';
        num_s--;
    }
    for(int i=0; i<num_h; i++) {
        cout << '#';
    }
    for(int i=0; i<num_s; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    int a,b;
    while(cin>>a>>b) {
        int e=0; int d=1;
        for(int i=0; i<a; i++) {
            //cout << "e: " << e << ", d: " << d << endl; 
            print_line(b,e);
            e = e+d;
            if((d==1) and (e==b/2)) {d=-1;}
            else if((d==-1) and (e==0)) {d=1;}
        }
        cout << endl;    
    }
}
