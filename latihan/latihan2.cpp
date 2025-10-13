#include <iostream>
using namespace std;

int main() {
    int number = 6; // Tentukan jumlah baris setengah bagian atas

    // Bagian atas (bagian atas dari hourglass)
    for (int i = number; i > 0; i--) {
        // Cetak spasi untuk mengatur posisi bintang
        for (int j = i; j < number; j++) {
            cout << " ";
        }
        // Cetak bintang, selalu ganjil (2*i - 1)
        for (int j = 0; j < (2*i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bagian bawah (bagian bawah dari hourglass)
    for (int i = 2; i <= number; i++) {
        // Cetak spasi untuk mengatur posisi bintang
        for (int j = i; j < number; j++) {
            cout << " ";
        }
        // Cetak bintang, selalu ganjil (2*i - 1)
        for (int j = 0; j < (2*i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}