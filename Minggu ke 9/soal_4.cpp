#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    if (!(std::cin >> N)) return 0;
    std::vector<int> a(N);
    for (int i = 0; i < N; ++i) std::cin >> a[i];

    std::vector<int> original = a;
    std::vector<int> sorted = a;
    std::sort(sorted.begin(), sorted.end());

    if (N % 2 == 1) {
        int midIndex = N / 2;
        int median = sorted[midIndex];
        std::cout << median << "\n";
        std::cout << "Data: [";
        for (int i = 0; i < N; ++i) {
            if (i) std::cout << ",";
            std::cout << original[i];
        }
        std::cout << "] Data terurut: [";
        for (int i = 0; i < N; ++i) {
            if (i) std::cout << ",";
            std::cout << sorted[i];
        }
        std::cout << "] N = " << N << " (ganjil). Elemen tengah (indeks ke-" << midIndex << ") adalah " << median << ".\n";
    } else {
        int i1 = N/2 - 1;
        int i2 = N/2;
        int x = sorted[i1];
        int y = sorted[i2];
        int sum = x + y;
        if (sum % 2 == 0) {
            int med_int = sum / 2;
            std::cout << med_int << ".0\n";
        } else {
            int whole = sum / 2;
            std::cout << whole << ".5\n";
        }
        std::cout << "Data: [";
        for (int i = 0; i < N; ++i) {
            if (i) std::cout << ",";
            std::cout << original[i];
        }
        std::cout << "] Data terurut: [";
        for (int i = 0; i < N; ++i) {
            if (i) std::cout << ",";
            std::cout << sorted[i];
        }
        std::cout << "] N = " << N << " (genap). Dua elemen tengah adalah " << x << " dan " << y << ". Median = (" << x << " + " << y << ") / 2 = ";
        if (sum % 2 == 0) {
            std::cout << (sum/2) << ".0\n";
        } else {
            std::cout << (sum/2) << ".5\n";
        }
    }

    return 0;
}