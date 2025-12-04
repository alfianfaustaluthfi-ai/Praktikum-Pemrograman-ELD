#include <iostream>
#include <fstream>
using namespace std;

int bacaData(int data[]) {
    ifstream file("angka.txt");
    int i = 0;
    while (file >> data[i] && i < 1000) {
        i++;
    }
    file.close();
    return i;
}

int cari_biner(int data[], int size, int cari) {
    int awal, akhir, tengah, langkah;
    bool ketemu;
    
    awal = 0;
    akhir = size - 1;
    langkah = 0;
    ketemu = false;
    
    do {
        tengah = (awal + akhir) / 2;
        if (data[tengah] == cari) {
            ketemu = true;
        } else {
            if (data[tengah] > cari) {
                akhir = tengah - 1;
            } else {
                awal = tengah + 1;
            }
        }
        langkah++;
    } while ((awal <= akhir) && !ketemu);
    
    return ketemu ? langkah : -1 * langkah;
}

int main() {
    int data[1000], size;
    int cari[10];
    
    size = bacaData(data);
    cout << "Baca " << size << " data dari file." << endl;
    
    cout << "Masukkan 10 angka yang dicari: ";
    for (int i = 0; i < 10; i++) {
        cin >> cari[i];
    }

    cout << "\nHasil pencarian: " << endl;
    for (int i = 0; i < 10; i++) {
        int hasil = cari_biner(data, size, cari[i]);
        if (hasil > 0) {
            cout << cari[i] << ": Ditemukan (langkah: " << hasil << ")" << endl;
        } else {
            cout << cari[i] << ": Tidak Ditemukan (langkah: " << -hasil << ")" << endl;
        }
    }
    
    return 0;
}