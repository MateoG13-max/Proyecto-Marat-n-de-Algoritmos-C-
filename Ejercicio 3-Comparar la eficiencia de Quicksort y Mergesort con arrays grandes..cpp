#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random>
// ---------- QUICKSORT ----------
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
    if (!a.empty())
        quicksort_rec(a, 0, static_cast<int>(a.size()) - 1);
}

// ---------- MERGESORT ----------
void merge(std::vector<long long>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    std::vector<long long> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
void mergesort(std::vector<long long>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cout << "Ingrese el tamaño del array: ";
    std::cin >> n;
    std::vector<long long> data(n);
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<long long> dist(1, 1000000);
    for (int i = 0; i < n; i++) data[i] = dist(rng);
    std::vector<long long> arr_quick = data;
    std::vector<long long> arr_merge = data;
    auto start_q = std::chrono::high_resolution_clock::now();
    quicksort(arr_quick);
    auto end_q = std::chrono::high_resolution_clock::now();
    auto dur_q = std::chrono::duration_cast<std::chrono::milliseconds>(end_q - start_q).count();
    auto start_m = std::chrono::high_resolution_clock::now();
    mergesort(arr_merge, 0, n - 1);
    auto end_m = std::chrono::high_resolution_clock::now();
    auto dur_m = std::chrono::duration_cast<std::chrono::milliseconds>(end_m - start_m).count();
    bool iguales = (arr_quick == arr_merge);
    std::cout << "Tiempo Quicksort: " << dur_q << " ms\n";
    std::cout << "Tiempo Mergesort: " << dur_m << " ms\n";
    std::cout << "¿Resultados iguales? " << (iguales ? "Sí" : "No") << "\n";
    return 0;
}
