#include <iostream>
#include <iomanip>

double celcius_to_fahrenheit(double celcius) {
    return (celcius * 9/5) + 32;
}

double celcius_to_kelvin(double celcius) {
    return celcius + 273.15;
}

int main() {
    int jumlah_data;
    std::cout << "Masukkan jumlah data suhu: ";
    std::cin >> jumlah_data;

    double celcius[100];

    for(int i = 0; i < jumlah_data; i++) {
        std::cout << "Masukkan suhu ke-" << i+1 << " (Celcius): ";
        std::cin >> celcius[i];
    }

    std::cout << "\nCelcius\tFahrenheit\tKelvin\n";
    std::cout << "------------------------------------\n";

    for(int i = 0; i < jumlah_data; i++) {
        double fahrenheit = celcius_to_fahrenheit(celcius[i]);
        double kelvin = celcius_to_kelvin(celcius[i]);
        
        std::cout << std::fixed << std::setprecision(2);
        std::cout << celcius[i] << "\t" 
                 << fahrenheit << "\t\t"
                 << kelvin << std::endl;
    }

    return 0;
}