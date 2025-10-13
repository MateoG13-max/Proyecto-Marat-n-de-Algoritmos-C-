#include <iostream>
#include <vector>
#include <algorithm>
void counting_sort_with_negatives(std::vector<int>& arr) {
    if (arr.empty()) return;
    // Encontrar el mínimo y máximo
    int min_val = *std::min_element(arr.begin(), arr.end());
    int max_val = *std::max_element(arr.begin(), arr.end());
    int range = max_val - min_val + 1;
    std::vector<int> count(range, 0);
    for (int num : arr) {
        count[num - min_val]++;
    }
    // Reconstruir el arreglo ordenado
    int idx = 0;
    for (int i = 0; i < range; i++) {
        while (count[i] > 0) {
            arr[idx++] = i + min_val;
            count[i]--;
        }
    }
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    counting_sort_with_negatives(arr);
    for (int i = 0; i < n; i++) {
        if (i) std::cout << " ";
        std::cout << arr[i];
    }
    std::cout << "\n";
    return 0;
}
