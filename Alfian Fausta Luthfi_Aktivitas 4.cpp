#include<iostream>
using namespace std;

int main() {
	int a = 10,b = 3;
	cout << "Penjumlahan: a+b = " << (a+b) << endl;
	cout << "Pengurangan: a-b = " << (a-b) << endl;
	cout << "Perkalian: a*b = " << (a*b) << endl;
	cout << "Pembagian: a/b = " << (a/b) << endl;
	cout << "Modulus: a%b = " << (a%b) << endl;
	
	int x = 5, y = 10;
	cout << "x == y : " << (x == y) << endl;
	cout << "x != y : " << (x != y) << endl;
	cout << "x > y : " << (x > y) << endl;
	cout << "x < y : " << (x < y) << endl;
	cout << "x >= y : " << (x >= y) << endl;
	cout << "x <= y : " << (x <= y) << endl;
	
	bool hasil;
	hasil = (10 > 5) && (5 < 10);
	cout << "10 > 5 AND 5 < 10 : " << hasil << endl;
	hasil = (10 > 5) || (5 > 10);
	cout << "10 > 5 OR 5 > 10 : " << hasil << endl;
	hasil = !(10 > 5);
	cout << "NOT (10 > 5) : " << hasil << endl;
	 
	
	return 0;
}
