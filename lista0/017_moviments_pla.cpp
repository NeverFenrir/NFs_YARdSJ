/*
Feu un programa que llegeixi una seqüència de caràcters, cadascun dels quals codificant un moviment (‘n’ per nord, ‘s’ per sud, ‘e’ per est, i ‘o’ per oest), 
i que calculi la posició final d’un objecte que inicialment es trobés a la posició (0,0). Suposeu que la primera component es correspon a la direcció est-oest, 
que anar cap a l’est significa sumar 1 a aquesta component, i que anar cap al sud significa sumar 1 a la segona component.

Entrada
L’entrada consisteix en una seqüència de caràcters ‘n’, ‘s’, ‘e’, o bé ‘o’.

Sortida
Cal escriure la posició final d’un objecte que inicialment es trobés a la posició (0,0).
*/

#include <iostream>
using namespace std;

int main() {
    char win;
    int pos_x = 0, pos_y = 0;

    while(cin >> win) {
        if(win=='n') {
            pos_y--;
        }
        else if (win=='s') {
            pos_y++;
        }
        else if (win=='o') {
            pos_x--;
        }
        else if (win=='e') {
            pos_x++;
        }
    }

    cout << '(' << pos_x << ", " << pos_y << ')' << endl;
}
