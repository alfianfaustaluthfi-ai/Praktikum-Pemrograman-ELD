#include<iostream>
#include<string>
using namespace std;

int main() {
	int angka;
	float desimal;
	char karakter;
	cout << "Masukkan sebuah angka: ";
	cin >> angka;
	cout << "Masukkan sebuah angka desimal: ";
	cin >> desimal;
	cout << "Masukkan sebuah karakter: ";
	cin >> karakter;
	
	cout << "Angka yang anda masukkan: " << angka << endl;
	cout << "Desimal yang anda masukkan: " << desimal << endl;
	cout << "Karakter yang anda masukkan: " << karakter << endl;
	
	
	string kalimat;
	cin.ignore();
	cout << "Masukkan sebuah kalimat: ";
	getline(cin, kalimat);
	cout << "Kalimat yang Anda masukkan: " << kalimat << endl;
	
	return 0;
	
}
