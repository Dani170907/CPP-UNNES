#include <iostream>
using namespace std;

int main() {
   int umur;
   cout << "Umur Anda Berapa? ";
   cin >> umur;
   cin.ignore(1000, '\n');

   string nama;
   cout << "Ngaran sia saha anying: ";
   // cin >> nama;
   getline(cin,nama);

   cout << "Selamat Pagi, " << nama << endl;
   cout << "Umur Anda " << umur << " Tahun";

   return 0;
}