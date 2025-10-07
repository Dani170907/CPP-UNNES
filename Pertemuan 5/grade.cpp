#include <iostream>
using namespace std;

int main() {
    double nilai;
    int kehadiran;

    cout << "Masukkan nilai ujian (0-100): ";
    cin >> nilai;
    cout << "Masukkan kehadiran (%): ";
    cin >> kehadiran;

    char grade;

    // Tentukan grade dasar
    if (nilai >= 90) grade = 'A';
    else if (nilai >= 80) grade = 'B';
    else if (nilai >= 70) grade = 'C';
    else if (nilai >= 60) grade = 'D';
    else grade = 'E';

    cout << "Grade dasar: " << grade << endl;

    if (kehadiran >= 95 && grade > 'A') {
        grade = grade - 1; // naik 1 tingkat (B→A, C→B, dst.)
        cout << "Bonus kehadiran: " << kehadiran << "% (Naik 1 tingkat)" << endl;
    }
    else if (kehadiran < 75 && grade < 'E') {
        grade = grade + 1; // turun 1 tingkat (A→B, B→C, dst.)
        cout << "Penalti kehadiran: " << kehadiran << "% (Turun 1 tingkat)" << endl;
    }

    cout << "Grade Final: " << grade << endl;

    return 0;
}
