#include <iostream>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    int pares = 0, impares = 0;
    for (int num : arr) {
        if (num % 2 == 0) pares++;
        else impares++;
    }
    std::cout << "Pares: " << pares << " Impares: " << impares << "\n";
}