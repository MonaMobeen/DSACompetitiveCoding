#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int total_ways = n * n + 7 * n;

    std::cout << total_ways << std::endl;

    return 0;
}
