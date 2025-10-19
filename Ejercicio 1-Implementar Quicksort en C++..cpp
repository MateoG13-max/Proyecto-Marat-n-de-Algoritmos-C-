#include <iostream>
#include <vector>
#include <algorithm>
template<typename T>
int hoare_partition(std::vector<T>& a, int low, int high) {
    T pivot = a[(low + high) / 2];
    int i = low - 1;
    int j = high + 1;
    while (true) {
        do { ++i; } while (a[i] < pivot);
        do { --j; } while (a[j] > pivot);
        if (i >= j) return j;
        std::swap(a[i], a[j]);
    }
}

template<typename T>
void quicksort_rec(std::vector<T>& a, int low, int high) {
    if (low < high) {
        int p = hoare_partition(a, low, high);
        quicksort_rec(a, low, p);
        quicksort_rec(a, p + 1, high);
    }
}
template<typename T>
void quicksort(std::vector<T>& a) {
    if (a.empty()) return;
    quicksort_rec(a, 0, static_cast<int>(a.size()) - 1);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    if (!(std::cin >> n)) return 0;
    std::vector<long long> a;
    a.reserve(n);
    for (int i = 0; i < n; ++i) {
        long long x; std::cin >> x;
        a.push_back(x);
    }
    quicksort(a);
    for (int i = 0; i < n; ++i) {
        if (i) std::cout << ' ';
        std::cout << a[i];
    }
    std::cout << '\n';
    return 0;

}
