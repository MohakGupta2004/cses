#include <iostream>
#include <vector>
using namespace std;

int main() {
  // inputs
  vector<int> arr = {6, 2, 3, 4, 7, 2, 1, 7, 1};
  int k = 4;

  // importing variables
  int i = 0;
  int j = arr.size() - 1;
  int m = (arr.size() - 1) - k;
  int lsum = 0, rsum = 0, sum = 0;

  // loop logic
  while (i < k) {
    lsum += arr[i];
    i++;
  }
  i--;
  sum = lsum;

  while (j > m) {
    lsum -= arr[i];
    rsum += arr[j];
    sum = max(sum, rsum + lsum);
    i--;
    j--;
  }
  cout << sum << endl;
}
