#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void printGrey(int n) { cout << endl; }

int main() {
  int n;
  cin >> n;
  int total = 0;
  total = pow(2, n);

  for (int i = 0; i < total; i++) {
    int grey = i ^ (i >> 1);
    for (int j = n - 1; j >= 0; j--) {
      cout << ((grey >> j) & 1);
    }
    cout << endl;
  }
}
