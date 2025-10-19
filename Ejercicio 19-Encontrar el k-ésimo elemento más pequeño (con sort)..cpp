#include <iostream>
#include <vector>
#include <numeric>
int main() {
    int n;
    std::cin >> n;
    std::vector<double> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    double suma = std::accumulate(arr.begin(), arr.end(), 0.0);
    double promedio = suma / n;
    std::cout << "Promedio: " << promedio << "\n";
}
