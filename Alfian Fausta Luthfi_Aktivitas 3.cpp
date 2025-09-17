#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int a = 10, b = 20;
	float c = 3.14;
	
	cout << "Nilai a: " << a << ", Nilai b: " << b << ", Nilai c: " << c << endl;
	
	int num1 = 2000, num2 = 39800, num3 = 489688;
	cout << right;
	cout << setw(10) << num1 << endl;
	cout << setw(10) << num2 << endl;
	cout << setw(10) << num3 << endl;
	
	return 0;
}
