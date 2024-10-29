#include <iostream>
using namespace std;

int main() {

    int a, b, c;


    cout << "Masukkan tiga angka: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) {

        cout << "Angka Terbesar adalah : " << a << endl;

    } else if (b >= a && b >= c) {

        cout << "Angka Terbesar adalah : " << b << endl;

    } else {

        cout << "Angka Terbesar adalah : " << c << endl;

    }



    return 0;
}
