#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> &arr, int start, int end, int target) {
  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return -1;
}
int loop_binary(vector<int> &arr, int target) {
  int start = 0;
  int end = 1;
  while (target > arr[end]) {
    int newStart = end + 1;
    end = end + 2 * (end - start + 1);
    start = newStart;
  }

  return binary_search(arr, start, end, target);
}
int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  int count = 0;
  int target = 15;
  cout << loop_binary(arr, target);
}
