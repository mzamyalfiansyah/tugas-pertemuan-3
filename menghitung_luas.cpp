#include <iostream>
using namespace std;

float calculateArea(char shape, float a, float b = 0) {
    switch (shape) {
        case 'p': // Persegi
            return a * a;
        case 'r': // Persegi Panjang
            return a * b;
        case 's': // Segitiga
            return 0.5 * a * b;
        default:
            cout << "Bentuk tidak valid." << endl;
            return 0;
    }
}

int main() {
    char shape;
    cout << "Masukkan bentuk (p: persegi, r: persegi panjang, s: segitiga): ";
    cin >> shape;

    float a, b;
    if (shape == 'p') {
        cout << "Masukkan panjang sisi: ";
        cin >> a;
        cout << "Luas persegi adalah: " << calculateArea(shape, a) << endl;
    } else if (shape == 'r') {
        cout << "Masukkan panjang: ";
        cin >> a;
        cout << "Masukkan lebar: ";
        cin >> b;
        cout << "Luas persegi panjang adalah: " << calculateArea(shape, a, b) << endl;
    } else if (shape == 's') {
        cout << "Masukkan alas: ";
        cin >> a;
        cout << "Masukkan tinggi: ";
        cin >> b;
        cout << "Luas segitiga adalah: " << calculateArea(shape, a, b) << endl;
    } else {
        cout << "Bentuk tidak valid." << endl;
    }

    return 0;
}
