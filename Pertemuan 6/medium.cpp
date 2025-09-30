#include <iostream>
using namespace std;

int main() {
    double totalBelanja, diskon = 0, totalBayar;

    cout << "Masukkan total belanja: Rp ";
    cin >> totalBelanja;

    if (totalBelanja >= 500000) {
        diskon = 0.20;
    } else if (totalBelanja >= 250000) {
        diskon = 0.10;
    } else if (totalBelanja >= 100000) {
        diskon = 0.05;
    } else {
        diskon = 0.0;
    }

    double potongan = totalBelanja * diskon;
    totalBayar = totalBelanja - potongan;

    cout << "\n=== Rincian Belanja ===" << endl;
    cout << "Total Belanja : Rp " << totalBelanja << endl;
    cout << "Diskon (" << diskon * 100 << "%) : Rp " << potongan << endl;
    cout << "Total Bayar   : Rp " << totalBayar << endl;

    return 0;
}