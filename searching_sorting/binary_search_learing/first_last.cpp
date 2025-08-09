#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> first_last(vector<int> &arr, int target) {
  int start = 0;
  int end = arr.size() - 1;
  vector<int> result;
  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (target == arr[mid]) {
      result.push_back(mid);
      if (arr[mid + 1] == target) {
        result.push_back(mid + 1);
      } else {
        result.push_back(mid - 1);
      }
      break;
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  if (result.size() == 0) {
    result.push_back(-1);
    result.push_back(-1);
  }
  sort(result.begin(), result.end());
  return result;
}

int main() {
  vector<int> arr = {5, 7, 7, 8, 8, 10};
  for (int i = 0; i < 2; i++) {
    vector<int> result = first_last(arr, 7);
    cout << result[i] << ",";
  }
}
