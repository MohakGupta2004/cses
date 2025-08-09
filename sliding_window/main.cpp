#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int n;
  int k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int i = 0, sum = 0, j = 0, count = 0;
  while (i != n && j != n) {

    sum += a[i];

    while (sum > k) {
      sum -= a[j];
      j++;
    }
    if (sum == k) {
      count++;
    }
    if (sum <= k) {
      i++;
    }
  }

  cout << count << endl;
}
