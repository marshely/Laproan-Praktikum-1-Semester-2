#include <iostream>
using namespace std;

int main() {
    //deklarasi
    int array [10];
    
    cout << "Inputkan 10 angka dengan spasi pada tiap angka: ";
    for (int a = 0; a < 10; a++ ){
       cin >> array [a]; 
    }

    cout << "Data array: " ;
    for (int a = 0; a < 10; a++ ){
       cout << array [a] << " ";
    }
    cout << "\n";

    //Nomor genap
    cout << "Nomor genap: ";
    for (int a = 0; a < 10; a++){
        if (array [a]%2 == 0){
            cout<< array [a]<< " ";
        }
    }
    cout << "\n";
    //Nomor ganjil
    cout << "Nomor ganjil: ";
    for (int a = 0; a < 10; a++){
        if (array [a]%2 != 0){
            cout<< array [a]<< " ";
        }
    } return 0;
}