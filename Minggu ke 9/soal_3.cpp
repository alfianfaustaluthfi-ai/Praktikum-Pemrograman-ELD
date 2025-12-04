#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, L, R;
    if (!(std::cin >> N >> L >> R)) return 0;
    std::vector<int> a(N);
    for (int i = 0; i < N; ++i) std::cin >> a[i];

    if (L < 0) L = 0;
    if (R >= N) R = N - 1;

    std::vector<int> original = a;
    std::vector<int> sub;
    if (L <= R) sub = std::vector<int>(a.begin() + L, a.begin() + R + 1);
    std::vector<int> sorted_sub = sub;
    if (!sorted_sub.empty()) std::sort(sorted_sub.begin(), sorted_sub.end());

    if (L <= R) {
        for (int i = 0; i < (int)sorted_sub.size(); ++i) {
            a[L + i] = sorted_sub[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        if (i) std::cout << ",";
        std::cout << a[i];
    }
    std::cout << "\n";

    std::cout << "Pada contoh ini, array A adalah [";
    for (int i = 0; i < N; ++i) {
        if (i) std::cout << ",";
        std::cout << original[i];
    }
    std::cout << "]. ";

    std::cout << "Nilai L adalah " << L << " dan R adalah " << R << ". ";

    std::cout << "Maka hanya elemen pada indeks " << L << " hingga " << R << ", yaitu [";
    for (int i = 0; i < (int)sub.size(); ++i) {
        if (i) std::cout << ",";
        std::cout << sub[i];
    }
    std::cout << "], akan diurutkan menjadi [";
    for (int i = 0; i < (int)sorted_sub.size(); ++i) {
        if (i) std::cout << ",";
        std::cout << sorted_sub[i];
    }
    std::cout << "]\n";

    return 0;
}