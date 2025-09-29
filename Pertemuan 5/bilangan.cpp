#include <iostream>
using namespace std;
int main() {
 int bilangan;

 cout << "Masukkan bilangan: ";
 cin >> bilangan;

 if (bilangan > 0) {
     cout << bilangan << " adalah bilangan positif" << endl;
 } else if (bilangan == 0) {
     cout << "Bilangan nol" << endl;
 } else {
     cout << bilangan << " adalah bilangan negatif" << endl;
 }

     return 0;
}