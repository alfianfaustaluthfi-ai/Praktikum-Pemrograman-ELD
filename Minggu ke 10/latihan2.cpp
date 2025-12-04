#include <iostream>
#include <algorithm>
using namespace std;

int cari_biner(int data[], int s, int cari, int &langkah) { 
    int kiri = 0, kanan = s - 1, tengah;
    langkah = 0;
    
    while (kiri <= kanan) {
        langkah++;
        tengah = (kiri + kanan) / 2;
        
        if (data[tengah] == cari) {
            return tengah;
        } else if (data[tengah] > cari) {
            kanan = tengah - 1;
        } else {
            kiri = tengah + 1;
        }
    }
    return -1; 
}

int main() {
    int data[1000];
    int size = 1000;
    
    // Buat data terurut
    for(int i = 0; i < size; i++) {
        data[i] = i + 1;
    }
    
    int min_val, max_val;
    
    cout << "Masukkan nilai minimum: ";
    cin >> min_val;
    cout << "Masukkan nilai maksimum: ";
    cin >> max_val;
    
    int langkah_min, langkah_max;
    
    // Cari data minimum
    cari_biner(data, size, min_val, langkah_min);
    
    // Cari data maksimum  
    cari_biner(data, size, max_val, langkah_max);
    
    cout << "\nHASIL PENCARIAN BINER:" << endl;
    cout << "Data " << min_val << ": " << langkah_min << " langkah" << endl;
    cout << "Data " << max_val << ": " << langkah_max << " langkah" << endl;
    cout << "Perbandingan: " << langkah_max - langkah_min << " langkah selisih" << endl;
    
    return 0;
}
