#include <iostream>
#include <vector>
int binary_search_iterative(const std::vector<int>& arr, int x) {
	int low = 0, high = arr.size() - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == x) return mid;
		else if (arr[mid] < x) low = mid + 1;
		else high = mid - 1;
	}
	return -1; // no encontrado
}
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n, x;
	std::cin >> n;
	std::vector<int> arr(n);
	for (int i = 0; i < n; i++) std::cin >> arr[i];
	std::cin >> x;
	int result = binary_search_iterative(arr, x);
	if (result != -1)
		std::cout << "Elemento encontrado en la posición: " << result+1 << "\n";
	else
		std::cout << "Elemento no encontrado\n";
	return 0;
}
