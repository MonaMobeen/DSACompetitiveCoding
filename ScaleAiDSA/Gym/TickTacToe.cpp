// #include <iostream>

// int main() {
//     int n;
//     std::cin >> n;

//     int total_ways = n * n + 7 * n;

//     std::cout << total_ways << std::endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int count_ways(int n) {
 /*
 Counts the number of ways to put tokens in a line in a 3D n × n × n cube.

 Args:
   n: The side length of the cube.

 Returns:
   The number of ways to put tokens in a line.
 */

 int ways = 0;
 for (int i = 0; i < n; i++) {
   ways += 6;
   ways += 12;
   ways += 4;
 }

 return ways;
}

int main() {
 int n;
 cin >> n;

 cout << count_ways(n) << endl;

 return 0;
}

