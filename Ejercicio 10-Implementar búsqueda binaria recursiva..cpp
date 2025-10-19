#include <iostream>
#include <vector>
int binary_search_recursive(const std::vector<int>& arr, int low, int high, int x) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == x) return mid;
    else if (arr[mid] > x) return binary_search_recursive(arr, low, mid - 1, x);
    else return binary_search_recursive(arr, mid + 1, high, x);
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, x;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::cin >> x;
    int result = binary_search_recursive(arr, 0, n - 1, x);
    if (result != -1)
        std::cout << "Elemento encontrado en la posición: " << result+1 << "\n";
    else
        std::cout << "Elemento no encontrado\n";
    return 0;
}
