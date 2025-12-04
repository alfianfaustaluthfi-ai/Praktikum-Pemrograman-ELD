#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> ganjil, genap;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x % 2 == 1) ganjil.push_back(x);
        else genap.push_back(x);
    }

    bool mixed = (!ganjil.empty() && !genap.empty());
    bool allEven = ganjil.empty();

    if (mixed) {
        sort(ganjil.begin(), ganjil.end());
        sort(genap.begin(), genap.end(), greater<int>());
    } else {
        sort(ganjil.begin(), ganjil.end());
        sort(genap.begin(), genap.end());
    }

    bool first = true;
    for (int x : ganjil) {
        if (!first) cout << " , ";
        cout << x;
        first = false;
    }
    for (int x : genap) {
        if (!first) cout << " , ";
        cout << x;
        first = false;
    }
    cout << endl;


    if (mixed) {
        cout << "[";
        for (int i = 0; i < ganjil.size(); i++) {
            cout << ganjil[i];
            if (i != ganjil.size() - 1) cout << ",";
        }
        cout << "] ganjil berada di kiri, [";
        for (int i = 0; i < genap.size(); i++) {
            cout << genap[i];
            if (i != genap.size() - 1) cout << ",";
        }
        cout << "] genap berada di kanan";
    }
    else if (allEven) {
        cout << "Semua genap sehingga pengurutan biasa";
    }
    else {
        cout << "Semua ganjil sehingga pengurutan biasa";
    }

    return 0;
}