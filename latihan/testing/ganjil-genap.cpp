#include <iostream>
using namespace std;

int main (){
    int num = 284691;
    int digit;
    int j_genap = 0, j_ganjil = 0;
    int t_genap = 0, t_ganjil = 0;

    cout << "Bilangan = " << num << endl;
    cout << "Digit Ganjil = ";
    int y = num;
    while (y > 0){
        digit = y % 10;
        if (digit % 2 != 0){
            cout << digit << ",";
            j_ganjil = j_ganjil + digit ;
            t_ganjil = t_ganjil + 1 ;
        }
        y = y/10;
    }
    
    cout << "(jumlah = " << j_ganjil << ")"<< endl;
    cout << "Digit Genap = ";
    int x = num ;
    while (x > 0){
        digit = x % 10;
        if (digit % 2 == 0){
            cout << digit << ",";
            j_genap = j_genap + digit ;
            t_genap = t_genap + 1 ;
        }
        x = x/10;
    }
    cout << "(jumlah = " << j_genap << ")"<< endl;
    cout << "Total digit ganjil : " << t_ganjil << endl;
    cout << "Total digit genap : " << t_genap << endl;
}