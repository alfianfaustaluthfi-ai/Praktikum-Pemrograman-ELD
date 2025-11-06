#include <iostream>
using namespace std;

void tukarByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void tukarByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Sebelum ditukar: a = " << a << ", b = " << b << endl;

    tukarByValue(a, b);
    cout << "Setelah tukarByValue : a = " << a << ", b = " << b << endl;

    tukarByReference(a, b);
    cout << "Setelah tukarByReference : a = " << a << ", b = " << b << endl;

    return 0;
}