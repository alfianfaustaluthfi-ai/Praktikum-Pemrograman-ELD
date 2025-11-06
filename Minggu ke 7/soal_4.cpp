#include <iostream>
#include <iomanip>
using namespace std;


double hitungRataRata(int nilai[], int jumlah) {
    double total = 0;
    for(int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return total / jumlah;
}

void tampilStatus(double rataRata) {
    cout << "Rata-rata: " << fixed << setprecision(2) << rataRata << endl;
    cout << "Status   : " << (rataRata >= 70 ? "LULUS" : "TIDAK LULUS") << endl;
}

int main() {
    int jumlahNilai;
    
    cout << "Masukkan jumlah nilai: ";
    cin >> jumlahNilai;
    
    int nilai[100];
    
    for(int i = 0; i < jumlahNilai; i++) {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai[i];
    }
    
    double rataRata = hitungRataRata(nilai, jumlahNilai);
    tampilStatus(rataRata);
    
    return 0;
}