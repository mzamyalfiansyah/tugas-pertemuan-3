#include <iostream>
using namespace std;

int main() {

    int skor;

    cout << "Masukkan nilai Skor : ";
    cin >> skor;


    if (skor >= 90) {

        cout << "Selamat, Anda mendapatkan nilai A." << endl;

    } else if (skor >= 80) {

        cout << "Anda mendapatkan nilai B." << endl;

    } else if (skor >= 70) {

        cout << "Anda mendapatkan nilai C." << endl;

    } else if (skor >= 60) {

        cout << "Anda mendapatkan nilai D." << endl;

    } else {

        cout << "Anda mendapatkan nilai E." << endl;

    }

    return 0;
}
