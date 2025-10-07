#include <iostream>
using namespace std;

int main () {
    int nilai;

    cout << "Masukkan nilai dari 0 sampai 100" << endl;
    cin >> nilai;

    if (nilai >= 86 && nilai <= 100) {
        cout << "Nilai: A" << endl;
    } else if (nilai >= 71 && nilai <= 85) {
        cout << "Nilai: B" << endl;
    } else if (nilai >= 61 && nilai <= 70) {
        cout << "Nilai: C" << endl;
    } else if (nilai >= 51 && nilai <= 60) {
        cout << "Nilai: D" << endl;
    } else if (nilai >= 1 && nilai <= 50) {
        cout << "Nilai: E" << endl;
    } else {
        cout << "Nilai Tidak Valid" << endl;
    }

    return 0;   
}