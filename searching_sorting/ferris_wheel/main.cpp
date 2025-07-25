#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int sum = 0, count = 0;
  sort(arr.begin(), arr.end());
  int i = 0, j = n - 1;
  while (i <= j) {
    if (arr[i] + arr[j] <= x) {
      i++;
      j--;
    } else {
      j--;
    }
    count++;
  }

  cout << count << endl;
}
