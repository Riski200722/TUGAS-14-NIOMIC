#include <iostream>
using namespace std;
int main()
{
    struct rumah
    {
        string tipe_rumah;
        int jumlah_kamar;
    };
    string *a;
    int *b;

    rumah pertama;

    pertama.tipe_rumah;
    pertama.jumlah_kamar;

    cout << "Alamat dari variable tipe rumah adalah " << &pertama.tipe_rumah << endl;
    cout << "Alamat dari variable jumlah_kamar adalah " << &pertama.tipe_rumah << endl;
    return 0;
}