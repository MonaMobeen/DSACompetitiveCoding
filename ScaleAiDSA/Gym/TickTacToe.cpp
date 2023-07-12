#include <iostream>

using namespace std;

int cubeCalculate(int n) {
 

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

 cout << cubeCalculate(n) << endl;

 return 0;
}
