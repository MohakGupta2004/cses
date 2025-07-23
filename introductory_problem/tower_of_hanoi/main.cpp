#include <cmath>
#include <iostream>
using namespace std;
void towerOfHanoi(int n, int start, int helper, int end) {
  if (n == 0) {
    return;
  }
  towerOfHanoi(n - 1, start, end, helper);
  cout << start << " " << end << endl;
  towerOfHanoi(n - 1, helper, start, end);
}
int main() {
  int n;
  cin >> n;
  cout << pow(2, n) - 1 << endl;
  towerOfHanoi(n, 1, 2, 3);
}
