#include <iostream>
#include <vector>
#include <algorithm>
void counting_sort_by_digit(std::vector<int>& arr, int exp) {
    int n = arr.size();
    std::vector<int> output(n);
    std::vector<int> count(10, 0);
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    arr = output;
}
void radix_sort(std::vector<int>& arr) {
    if (arr.empty()) return;

    int max_val = *std::max_element(arr.begin(), arr.end());

    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        counting_sort_by_digit(arr, exp);
    }
}
void radix_sort_with_negatives(std::vector<int>& arr) {
    std::vector<int> negatives, positives;
    for (int num : arr) {
        if (num < 0) negatives.push_back(-num);
        else positives.push_back(num);
    }
    radix_sort(negatives);
    radix_sort(positives);
    int idx = 0;
    for (int i = negatives.size() - 1; i >= 0; i--) {
        arr[idx++] = -negatives[i];
    }
    for (int num : positives) {
        arr[idx++] = num;
    }
}
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) std::cin >> arr[i];
    radix_sort_with_negatives(arr);
    for (int i = 0; i < n; i++) {
        if (i) std::cout << " ";
        std::cout << arr[i];
    }
    std::cout << "\n";
    return 0;
}
