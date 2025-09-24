#include <iostream>
using namespace std;

int main () {
    int a, b;
    int operasi = 0;
    float hasil = 0;
    cin >> a >> b >> operasi;
    switch (operasi) {
        case 1:
        hasil = a + b;
        cout << hasil << endl;
        break;
        case 2:
        hasil = a - b;
        cout << hasil << endl;
        break;
        case 3:
        hasil = a * b;
        cout << hasil << endl;
        break;
        case 4:
        hasil = (float) a / b;
        cout << hasil << endl;
        break;
        default:
        cout << "salah bos";
        break;
     }
return 0;
}
