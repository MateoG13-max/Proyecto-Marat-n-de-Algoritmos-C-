#include <iostream>
#include <vector>
#include <algorithm>
void bucket_sort_with_negatives(std::vector<double>& arr) {
    if (arr.empty()) return;
    int n = arr.size();
    double min_val = *std::min_element(arr.begin(), arr.end());
    double max_val = *std::max_element(arr.begin(), arr.end());
    double range = max_val - min_val;
    if (range == 0) return;
    std::vector<std::vector<double>> buckets(n);// Crear buckets
    for (double val : arr) {
        int idx = (int)((val - min_val) / range * (n - 1));
        buckets[idx].push_back(val);
    }
    for (int i = 0; i < n; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }
    int idx = 0;    // Reconstruir el arreglo ordenado
    for (int i = 0; i < n; i++) {
        for (double val : buckets[i]) {
            arr[idx++] = val;
        }
    }
}
int main() {
    int n;
    std::cin >> n;
    std::vector<double> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    bucket_sort_with_negatives(arr);
    for (int i = 0; i < n; i++) {
        if (i) std::cout << " ";
        std::cout << arr[i];
    }
    std::cout << "\n";
    return 0;
}