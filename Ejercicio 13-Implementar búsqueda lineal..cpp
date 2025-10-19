#include <iostream>
#include <vector>
int linear_search(const std::vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == x) return i;
    return -1;
}
int main() {
    int n, x;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    std::cin >> x;
    int pos = linear_search(arr, x);
    if (pos != -1) std::cout << "Encontrado en posición: " << pos << "\n";
    else std::cout << "No encontrado\n";
}