#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> nilai;

    nilai["Arya"] = 90;
    nilai["Bagus"] = 85;
    nilai["Riyan"] = 88;
    nilai["thio"] = 92;

    cout << "Nilai Siswa:" << endl;
    for (const auto& pasangan : nilai) {
        cout << pasangan.first << ": " << pasangan.second << endl;
    }

    nilai["Bagus"] = 95;

    cout << "\nSetelah diperbarui, nilai Bagus: " << nilai["Bagus"] << endl;

    if (nilai.find("Aqbil") != nilai.end()) {
        cout << "Nilai Aqbil: " << nilai["Aqbil"] << endl;
    } else {
        cout << "Aqbil tidak memiliki nilai." << endl;
    }

    return 0;
}