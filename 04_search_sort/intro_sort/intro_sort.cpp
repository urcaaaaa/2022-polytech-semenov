#include <random>
#include <iostream>

void fill_array_random(int arr[], int n, int a, int b) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(a, b);

    for (int i = 0; i < n; ++i) {
        arr[i] = dist(rng);
    }
}

void print_array(int arr[], int n, bool show_index = false) {
    std::cout << "{";
    for (int i = 0; i < n; ++i) {
        if (show_index) std::cout << i << ": ";
        std::cout << arr[i];
        if (i != n - 1) std::cout << ", ";
    }
    std::cout << "}" << std::endl;
}

int main() {
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    fill_array_random(arr, n, 0, 100);
    print_array(arr, n, true);
    return 0;
}
