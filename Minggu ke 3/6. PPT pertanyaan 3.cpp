#include <iostream>
#include <string>
using namespace std;

int main () {
    string username = "ugo";
    string i;
    cin >> username;
    if (username == "ugo") {
        cout << "masukan pin: ";
        cin >> i;
        if (i.length() == 4 && i >= "0000" && i <= "9999") {
            cout << "pin benar";
        }
        else {
            cout << "pin salah\n";
        }
    } else {
        cout << "username salah\n";
    }
return 0;
}
