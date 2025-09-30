#include <iostream>
using namespace std;

int main() {
   int pilih;
   do {
      cout << "Menu " << endl;
      cout << "1. Tampilkan Halo" << endl;
      cout << "2. Tampilkan Selamat" << endl;
      cout << "3. Tampilkam Keluar" << endl;
      cout << "Pilihan: " ;
      cin >> pilih;

      if (pilih == 1){
         cout << "Halo" << endl;
      } else if (pilih == 2){
         cout << "Selamat" << endl;
      } else if (pilih != 3){
         cout << "Tidak Valid" << endl;
      }
      
   } while(pilih != 3);
   cout << "Terima Kasih" << endl;


   return 0;
}