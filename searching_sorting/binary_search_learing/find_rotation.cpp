#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr) {
  int start = 0;
  int end = arr.size() - 1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (mid < end && arr[mid] > arr[mid + 1]) {
      return mid;
    }
    if (mid > start && arr[mid] < arr[mid - 1]) {
      return mid - 1;
    }
    if (arr[start] > arr[mid]) {
      end = mid - 1;
    } else if (arr[start] <= arr[mid]) {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {5, 1, 2, 3, 4};
  int length = arr.size();
  cout << "Rotation: " << length - findPivot(arr);
}
