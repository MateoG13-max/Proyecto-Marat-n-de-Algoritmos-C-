#include <iostream>
#include <vector>
int count_occurrences(const std::vector<int>& arr, int x) {
    int count = 0;
    for (int num : arr)
        if (num == x) count++;
    return count;
}
int main() {
    int n, x;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::cin >> x;
    std::cout << "Ocurrencias: " << count_occurrences(arr, x) << "\n";
}
