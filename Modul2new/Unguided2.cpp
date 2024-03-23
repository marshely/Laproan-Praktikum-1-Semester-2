#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int a, b, c;
    cout << "Masukkan jumlah blok array yang akan Anda buat: ";
    cin  >> a;
    cout << "Masukkan jumlah baris dan kolom pada tiap blok: ";
    cin  >> b >> c;
    int arr[a][b][c];

    // Input elemen
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;//elemen array ditampilkan dalam satu baris tanpa spasi antar elemen, menggunakan ends untuk menandai akhir baris
            }
        }
    }
    cout <<endl;

    // Tampilan array
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < b; y++)
        {
            for (int z = 0; z < c; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}