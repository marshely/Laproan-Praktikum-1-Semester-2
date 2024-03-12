#include <iostream>

using namespace std;
// Fungsi untuk menghitung luas persegi
float luasPersegi(float sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung luas lingkaran
float luasLingkaran(float jari_jari) {
    return 3.14 * jari_jari * jari_jari;
}

int main() {
    float sisiPersegi, jariJariLingkaran;

    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisiPersegi;

    cout << "Masukkan panjang jari-jari lingkaran: ";
    cin >> jariJariLingkaran;

    cout << "Luas persegi dengan sisi " << sisiPersegi << " adalah: "
     << luasPersegi(sisiPersegi) << endl;

    cout << "Luas lingkaran dengan jari-jari " << jariJariLingkaran << " adalah: " 
    << luasLingkaran(jariJariLingkaran) << endl;

    return 0;
}