/*
Considereu un tauler d’escacs amb f files i c columnes, on a cada casella hi ha entre 0 i 9 monedes. Feu un programa que, donat un tauler, calculi el nombre total de monedes que conté.
Entrada

L’entrada comença amb el nombre de files f i el nombre de columnes c. Segueixen f línies, cadascuna amb c caràcters entre ‘0’ i ‘9’.
Sortida

Cal escriure el nombre total de monedes del tauler.
*/

#include <iostream>
using namespace std;

int read_line(int x) {
    int res_line = 0;
    for(int i=1; i<=x; i++) {
        char window;
        cin >> window;
        // convert char to numeric value by subtracting '0'
        res_line += int((window - '0'));
    }
    return res_line;
}

int main() {
    int f, c;
    cin >> f >> c;

    int result = 0;
    for(int i=1; i<=f; i++) {
        result += read_line(c);
    }
    cout << result << endl;
}
