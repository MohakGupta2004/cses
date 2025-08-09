#include <iostream>
#include <vector>
using namespace std;

char upper_bound(vector<char> &arr, int target) {
  int start = 0;
  int end = arr.size() - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      return arr[mid];
    } else if (target < arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return arr[start % (arr.size())];
}

int main() {
  vector<char> arr = {'c', 'f', 'h'};
  int target = 'j';

  cout << upper_bound(arr, target) << endl;
}
