#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> arr, int n, int start, int end) {
  int mid = start + (end - start) / 2;
  if (n == arr[mid]) {
    return mid;
  } else if (n < arr[mid]) {
    return binary_search(arr, n, start, mid);
  } else if (n > arr[mid]) {
    return binary_search(arr, n, mid, end);
  }
  return -1;
}
int main() {
  int n;
  cin >> n;

  vector<int> arr{1, 2, 3, 4, 5, 6};

  int result = binary_search(arr, n, 0, arr.size() - 1);

  cout << result << endl;
}
