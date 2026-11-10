/*
Feu un programa que, donada una seqüència de paraules, 
escrigui quantes paraules hi ha entre la paraula “principi” i la paraula “final”.
Si falta la paraula “principi”, o falta la paraula “final”, o ambdues, o si apareixen en ordre invers, cal indicar-ho.

Entrada
L’entrada consisteix en diverses paraules. Tant la paraula “principi” com la paraula “final” hi apareixen, com a molt, una vegada.

Sortida
Cal escriure el nombre de paraules entre la paraula “principi” i la paraula “final”, si aquestes apareixen en aquest ordre. Altrament, cal escriure “sequencia incorrecta”.
*/

#include <iostream>
using namespace std;

int count() {
    string window = "";
    bool trobat2 = false;

    int compt = 0;
    while((cin>>window) and (not trobat2)) {
        if(window=="final") {trobat2=true;}
        else{compt++;}
    }
    if(not trobat2) {return(-1);}
    else{return(compt);}
}

int main() {
    string window;
    bool trobat1 = false;
    int result = -1;
    while((cin>>window) and (not trobat1)) {
        if(window=="principi") {
            result = count();
            trobat1 = true;
        }
    }
    if((result==-1)) {cout << "sequencia incorrecta" << endl;}
    else {cout << result << endl;}
}
