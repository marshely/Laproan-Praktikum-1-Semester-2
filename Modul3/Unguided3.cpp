// Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

#include <iostream>
using namespace std;
int main()
{
    int i, pilihan;

    cout << "Jumlah angka yang ingin Anda masukkan: ";
    cin >> i;
    int array[i];

    cout << "Inputkan " << i << " angka dengan spasi pada tiap angka: ";
    for (int a = 0; a < i; a++)
    {
        cin >> array[a];
    }

    cout << "Data array: ";
    for (int a = 0; a < i; a++)
    {
        cout << array[a] << " ";
    }
    cout << "\n";

    cout << "Masukkan pilihan menu: " << endl;
    cout << "1. Nilai maksimum" << endl;
    cout << "2. Nilai minimum " << endl;
    cout << "3. Nilai rata- rata" << endl;
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
    {// Mencari nilai maksimum
        int maks = array[0];
        cout << "Nilai Maksimum: ";
        for (int a = 0; a < i; a++)
        {
            if (array[a] > maks)
            {
                maks = array[a];
            }
        }
        cout << maks;
        break;
    }

    case 2:
    {// Mencari nilai minimum
        int min = array[0];
        cout << "Nilai Minimum: ";
        for (int a = 0; a < i; a++)
        {
            if (array[a] < min)
            {
                min = array[a];
            }
        }
        cout << min;
        break;
    }
    case 3:
    {// Mencari nilai rata- rata
        float sum;
        cout << "Nilai rata- rata: ";
        for (int a = 0; a < i; a++)
        {
            sum += array[a];
        }
        float ratarata = sum / i;
        cout << ratarata;
        break;
    }
    default:
        cout << "Pilihan tidak valid." << endl;
        break;
    }
    return 0;
}
