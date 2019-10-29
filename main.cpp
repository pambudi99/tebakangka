#include <iostream>
#include <ctime>
//#include <cmath>
#include <stdlib.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int maksNilai = 0;
    int life = 3;
    int tebak = 0;
    int tebakan = 0;
    char bantuan ='y';

    while ((maksNilai>100)||(maksNilai<10)) {
        cout << "\nMasukkan maksimal nilai (10-100) : ";
        cin >> maksNilai;
        if (maksNilai > 100) cout << "Terlalu besar\n";
        else if (maksNilai < 10) cout << "Terlalu kecil\n";

        cout << "Silakan tebak nilai antara 0 sampai " << maksNilai << " !! ";
        srand((unsigned)time(0));
        tebak = (rand()%maksNilai)+1;

        while (life > 0 && tebakan != tebak) {
            cout << "\nMasukkan tebakan Anda : ";
            cin >> tebakan;
            if (tebakan == tebak) {
                cout << "Tebakan Anda benar.\n";
                break;
            } else {
                life--;
                if (tebakan > tebak) {
                    cout << "Tebakan Anda terlalu besar.\n";
                } else if (tebakan < tebak) {
                    cout << "Tebakan Anda terlalu kecil.\n";
                }
                cout << "Tebakan Anda salah, nyawa : " << life << endl;
                if (life == 0) {
                    cout << "Game over." << endl;
                }
                cout << "butuh bantuan?(merupakan angka terdekat dengan jarak 1 angka dari jawaban)[y/n]";
                cin >> bantuan;
                if (bantuan=='y') {
                    cout <<tebak-1 << endl;
                }
            }
        }
    }
    char ch; cin >> ch;
    return 0;
}
