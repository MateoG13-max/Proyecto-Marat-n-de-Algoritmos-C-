#include <iostream>
#include <vector>
int first_greater_equal(const std::vector<int>& arr, int k) {
    int low = 0, high = arr.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= k) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }
    return ans;
}
int main() {
    int n, k;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::cin >> k;

    int pos = first_greater_equal(arr, k);
    if (pos != -1) std::cout << "Posición: " << pos << " Valor: " << arr[pos] << "\n";
    else std::cout << "No hay elementos >= " << k << "\n";
}