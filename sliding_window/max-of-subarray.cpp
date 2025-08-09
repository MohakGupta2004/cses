#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr = {1, 3, 2, 5, 4};
  vector<int> ans;
  int sum = 0;
  int m = 3;

  for (int i = 0; i < m; i++) {
    sum += arr[i];
    ans.push_back(sum);
  }

  for (int i = m; i < arr.size() - 1; i++) {
    sum += arr[i];
    sum -= arr[i - m];
    ans.push_back(sum);
  }

  for (int i = 0; i < ans.size() - 1; i++) {
    cout << ans[i] << ",";
  }

  cout << endl;
}
