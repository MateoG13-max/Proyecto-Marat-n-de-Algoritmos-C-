#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    int max_val = *std::max_element(arr.begin(), arr.end());
    std::cout << "Máximo: " << max_val << "\n";
}
