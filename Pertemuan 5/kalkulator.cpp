#include <iostream>
using namespace std;
int main() {
 double bil1, bil2;
 char op;

 cout << "Masukkan bilangan pertama: ";
 cin >> bil1;
 cout << "Masukkan operator (+, -, *, /): ";
 cin >> op;
 cout << "Masukkan bilangan kedua: ";
 cin >> bil2;

 
 if (op == '+') {
     int hasil = bil1 + bil2;
     cout << "Hasil dari " << bil1 << " ditambah " << bil2 << " adalah " << hasil << endl;
 }
 
 if (op == '-') {
     int hasil = bil1 - bil2;
    cout << "Hasil dari " << bil1 << " dikurangi " << bil2 << " adalah " << hasil << endl; }
 
 if (op == '*') {
     int hasil = bil1 * bil2;
     cout << "Hasil dari " << bil1 << " dikali " << bil2 << " adalah " << hasil << endl;
 }
 
 if (op == '/') {
     int hasil = bil1 / bil2;
     cout << "Hasil dari " << bil1 << " dibagi " << bil2 << " adalah " << hasil << endl;
 }

 return 0;
}
