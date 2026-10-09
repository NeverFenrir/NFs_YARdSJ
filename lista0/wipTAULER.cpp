/*
Considereu un tauler d’escacs amb f files i c columnes, on a cada casella hi ha entre 0 i 9 monedes. Feu un programa que, donat un tauler, calculi el nombre total de monedes que conté.

Entrada
L’entrada comença amb el nombre de files f i el nombre de columnes c. Segueixen f línies, cadascuna amb c caràcters entre ‘0’ i ‘9’.

Sortida
Cal escriure el nombre total de monedes del tauler.
*/

#include <iostream>
using namespace std;

int main() {
    
    int row, col;
    cin >> row >> col;

    int total_result;
    for(int i = 1; i <= row; i++) {
        int window;
        int row_result = 0;
        for(int j = 1; j <= col; j++) {
            cin >> window;
            row_result += window;
        }
        total_result += row_result;
        row_result = 0;
    }
    cout << total_result << endl;
}
