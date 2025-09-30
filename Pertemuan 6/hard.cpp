#include <iostream>
using namespace std;

int main() {
    int angkaRahasia = 50; 
    int tebakan, kesempatan = 3;
    int batasBawah = 1, batasAtas = 100;

    cout << "=== GAME TEBAK ANGKA ===" << endl;
    cout << "Saya memikirkan angka 1-100. Anda punya 3 kesempatan!" << endl;

    for (int i = 1; i <= kesempatan; i++) {
        cout << "Kesempatan " << i << "/" << kesempatan << endl;
        cout << "Tebakan Anda: ";
        cin >> tebakan;

        if (tebakan == angkaRahasia) {
            cout << "Selamat! Anda menebak dengan benar! Angka saya adalah " 
                 << angkaRahasia << "." << endl;
            return 0; 
        } else {
            if (i == 1) {
                if (tebakan < angkaRahasia)
                    cout << "Terlalu kecil! Angka saya lebih besar dari " << tebakan << "." << endl;
                else
                    cout << "Terlalu besar! Angka saya lebih kecil dari " << tebakan << "." << endl;
            } else if (i == 2) {
                if (tebakan < angkaRahasia)
                    cout << "Angka saya berada antara " << tebakan << "-" << batasAtas << "." << endl;
                else
                    cout << "Angka saya berada antara " << batasBawah << "-" << tebakan << "." << endl;
            } else {
                cout << "Maaf, kesempatan habis! Angka saya adalah " << angkaRahasia << "." << endl;
            }
        }
    }
    return 0;
}