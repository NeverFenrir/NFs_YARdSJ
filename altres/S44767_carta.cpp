/*
Escriu una funció que donades dues cartes de Poker retorni true si el valor de la primera carta és major que el valor de la segona carta. Les cartes són les de la baralla de Poker habitual, representades amb un dels 13 caràcters següents: A, 2, 3, ..., 9, 0, J, Q, K. Hi ha dos caràcters especials: la carta A és l’As i equival a l’1, tal com en les baralles normals, i el dígit 0 representa el 10, per simplificar la lectura. Fixeu-vos que les cartes identificades amb una lletra sempre són majúscules.

Els valors de les cartes són els següents: les cartes numèriques tenen el valor que indica el seu número. La carta 0 tindrà el valor 10, pel fet que representa la carta 10. Tot seguit, la J val 11, la Q val 12 i la K val 13. L’A valdria 1, però en aquest problema considerarem que té el valor més alt (com es fa sovint), i serà 14.

La capçalera de la funció és, exactament:

 * @pre c1, c2 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Retorna cert si c1 té un valor més alt que c2
 bool better_card(char c1, char c2);
*/

 #include <iostream>
 using namespace std;

int valor(int n) {
    int result;
    if((n>='2') and (n<='9')) {result = n-'0';}
    else if(n=='A') {result = 14;}
    else if(n=='0') {result = 10;}
    else if(n=='J') {result = 11;}
    else if(n=='Q') {result = 12;}
    else if(n=='K') {result = 13;}
    else {result = 0;}
    
    return(result);
}

bool better_card(char c1, char c2) {
    int v1 = valor(c1);
    int v2 = valor(c2);
    return(v1>v2);
}

int main() {}