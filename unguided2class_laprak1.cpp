#include <iostream>
using namespace std;

class Lingkaran {
private:
    float jari_jari;

public:
    Lingkaran(float r) {
        jari_jari = r;
    }

    float hitungLuas() {
        return 3.14 * jari_jari * jari_jari;
    }

    float hitungKeliling() {
        return 2 * 3.14 * jari_jari;
    }
};

int main() {
    Lingkaran lingkaran(7);
    cout << "Luas Lingkaran: " << lingkaran.hitungLuas() << endl;
    cout << "Keliling Lingkaran: " << lingkaran.hitungKeliling() << endl;

    return 0;
}