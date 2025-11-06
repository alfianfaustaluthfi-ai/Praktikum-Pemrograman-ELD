#include <iostream>
#include <iomanip>
using namespace std;

int totalHadir = 0;

void updateTotalHadir(int hadir) {
    totalHadir += hadir;
}

double hitungRasioKehadiran(int totalPertemuan, int jumlahMhs) {
    int totalMaksimal = totalPertemuan * jumlahMhs;
    return (double)totalHadir / totalMaksimal * 100;
}

void tampilHasil(int totalPertemuan, int jumlahMhs) {
    int totalMaksimal = totalPertemuan * jumlahMhs;
    cout << "Total kehadiran kelas : " << totalHadir 
         << " dari " << totalMaksimal << endl;
    cout << "Persentase kehadiran : " << fixed 
         << setprecision(2) << hitungRasioKehadiran(totalPertemuan, jumlahMhs) 
         << " %" << endl;
}

int main() {
    int jumlahMhs, totalPertemuan;
    
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMhs;
    
    cout << "Masukkan total pertemuan: ";
    cin >> totalPertemuan;

    for(int i = 0; i < jumlahMhs; i++) {
        int hadir;
        cout << "Kehadiran mahasiswa ke-" << i+1 << ": ";
        cin >> hadir;
        updateTotalHadir(hadir);
    }
    

    tampilHasil(totalPertemuan, jumlahMhs);
    
    return 0;
}