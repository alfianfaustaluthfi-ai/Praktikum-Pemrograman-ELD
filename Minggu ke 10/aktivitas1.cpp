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

int cari_sekuensial(int data[], int size, int cari, int &langkah) {
    langkah = 0;
    for (int i = 0; i < size; i++) {
        langkah++;
        if (data[i] == cari) {
            return i;
        }
    }
    return -1;
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
        int langkah;
        int hasil = cari_sekuensial(data, size, cari[i], langkah);
        cout << cari[i] << ": " << (hasil != -1 ? "Ditemukan" : "Tidak Ditemukan") << " (langkah: " << langkah << ")" << endl;
    }
    
    return 0;
}
