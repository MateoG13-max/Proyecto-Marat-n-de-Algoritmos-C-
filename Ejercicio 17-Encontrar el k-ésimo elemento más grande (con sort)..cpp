#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    if (n < 2) {
        std::cout << "No hay suficiente elementos\n";
        return 0;
    }
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::cout << "Segundo máximo: " << arr[1] << "\n";
}
