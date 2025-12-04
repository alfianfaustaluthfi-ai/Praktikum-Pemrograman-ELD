#include <iostream>
#include <algorithm>
using namespace std;

int cari_sekuensial(int data[], int s, int cari, int &langkah) { 
    langkah = 0;
    for (int i = 0; i < s; i++) {
        langkah++;
        if (data[i] == cari) {
            return i;
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
    cari_sekuensial(data, size, min_val, langkah_min);
    
    // Cari data maksimum  
    cari_sekuensial(data, size, max_val, langkah_max);
    
    cout << "\nHASIL PENCARIAN SEKUENSIAL:" << endl;
    cout << "Data " << min_val << ": " << langkah_min << " langkah" << endl;
    cout << "Data " << max_val << ": " << langkah_max << " langkah" << endl;
    cout << "Perbandingan: " << langkah_max - langkah_min << " langkah selisih" << endl;
    
    return 0;
}
