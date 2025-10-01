#include <iostream>
using namespace std;

int f(int x) {
    return x * x + 1;
}

int main() {
    // Uji fungsi dengan input 1 sampai 6
    for (int x = 1; x <= 6; x++) {
        cout << "x = " << x << ", y = " << f(x) << endl;
    }
    return 0;
}