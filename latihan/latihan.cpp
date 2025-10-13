#include <iostream>
using namespace std;

int main() {
    int angka = 284691;
    int digit;
    int jumlahGanjil = 0, jumlahGenap = 0;
    int totalGanjil = 0, totalGenap = 0;

    int temp = angka; 

    cout << "Bilangan: " << angka << endl;

    // Proses digit ganjil
    cout << "Digit Ganjil: ";
    int copy1 = temp;
    while (copy1 > 0) {
        digit = copy1 % 10;
        if (digit % 2 != 0) {
            cout << digit << " ";
            jumlahGanjil += digit;
            totalGanjil++;
        }
        copy1 /= 10;
    }
    cout << "(jumlah = " << jumlahGanjil << ")" << endl;

    // Proses digit genap
    cout << "Digit Genap: ";
    int copy2 = temp;
    while (copy2 > 0) {
        digit = copy2 % 10;
        if (digit % 2 == 0) {
            cout << digit << " ";
            jumlahGenap += digit;
            totalGenap++;
        }
        copy2 /= 10;
    }
    cout << "(jumlah = " << jumlahGenap << ")" << endl;

    cout << "Total digit ganjil: " << totalGanjil << endl;
    cout << "Total digit genap: " << totalGenap << endl;

    return 0;
}