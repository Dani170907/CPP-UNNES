#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Program Menentukan NIM Ganjil atau Genap" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << angka << " adalah NIM GENAP." << endl;
    } else {
        cout << angka << " adalah NIM GANJIL." << endl;
    }

    return 0;
}
