#include <iostream>
using namespace std;

int main () {
   double kebersihan = 4.8;
   double pelayanan = 4.5;
   double lokasi = 4.2;
   double harga = 3.8;

   double skorAkhir = (kebersihan * 0.3) + (pelayanan * 0.3) + (lokasi * 0.2) + (harga * 0.2);

   string rating;
   if (skorAkhir >= 4.5) {
      rating = "Bintang 5 (Excellent)";
   } else if (skorAkhir >= 3.5) {
      rating = "Bintang 4 (Very Good)";
   } else if (skorAkhir >= 2.5) {
      rating = "Bintang 3 (Good)";
   } else if (skorAkhir >= 1.5) {
      rating = "Bintang 2 (Fair)";
   } else {
      rating = "Bintang 1 (Poor)";
   }

   cout << "=== EVALUASI HOTEL ===" << endl;
   cout << "Kebersihan " << kebersihan << " (Bobot 30%)" << endl; 
   cout << "Pelayanan " << pelayanan << " (Bobot 30%)" << endl; 
   cout << "Lokasi " << lokasi << " (Bobot 20%)" << endl; 
   cout << "Harga " << harga << " (Bobot 20%)" << endl; 
   cout << "Skor Akhir: " << skorAkhir << endl;
   cout << "Rating: " << rating << endl;
   
   return 0;
   
}