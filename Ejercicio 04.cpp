#include <iostream>
#include <vector>
#include <algorithm>
void heapify(std::vector<long long>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Implementación de Heapsort
void heapsort(std::vector<long long>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // Extraer elementos uno por uno
    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::vector<long long> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    heapsort(arr);
    for (int i = 0; i < n; i++) {
        if (i) std::cout << " ";
        std::cout << arr[i];
    }
    std::cout << "\n";
    return 0;
}
