/*
Feu un programa que afegeixi un segon a una hora del dia, donades les seves hores, minuts i segons.

Entrada
L’entrada consisteix en tres naturals h, m, s; que representen una hora del dia,
és a dir, tals que h<24, m<60, s<60

Sortida
Cal escriure el nou temps definit pe
 més un segon en el format “HH:MM:SS”.
*/

#include <iostream>
#include <string>
using namespace std;

string format_time(int x) {

    string str;
    str = to_string(x);

    if(str.length() < 2) {
        str = "0" + str;
        return str;
    }

    else {
        return str;
    }
}


int main() {
    int h,m,s;
    cin >> h >> m >> s;

    s += 1;

    if(s>59) {
        s = 0; m += 1;
    }

    if(m>59) {
        m = 0; h += 1;
    }

    if(h>23) {
        h = 0;
    }

    cout << format_time(h)<<":"<<format_time(m)<<":"<<format_time(s) << endl;
}