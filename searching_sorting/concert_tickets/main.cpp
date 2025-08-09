#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int ceiling_of_the_number(vector<int> &arr, int target, int start, int end) {
  if (start > end) {
    return -1;
  }
  int mid = start + (end - start) / 2;
  if (arr[mid] == target) {
    return arr[mid];
  } else if (arr[mid] > target) {
    return ceiling_of_the_number(arr, target, start, mid - 1);
  } else if (arr[mid] < target) {
    return ceiling_of_the_number(arr, target, mid + 1, end);
  }
  return arr[end];
}
int main() {
  int n, m, hi, t;
  cin >> n >> m;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  sort(h.begin(), h.end());
  for (int i = 0; i < m; i++) {
    cin >> t;
    cout << ceiling_of_the_number(h, t, 0, h.size() - 1);
  }
}
