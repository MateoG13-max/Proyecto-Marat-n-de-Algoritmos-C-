#include <iostream>
#include <vector>
#include <numeric>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    int suma = std::accumulate(arr.begin(), arr.end(), 0);
    std::cout << "Suma total: " << suma << "\n";
}
