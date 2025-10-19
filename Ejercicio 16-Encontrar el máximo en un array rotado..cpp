#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    int min_val = *std::min_element(arr.begin(), arr.end());
    std::cout << "Mínimo: " << min_val << "\n";
}
