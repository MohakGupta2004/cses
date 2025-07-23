#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<int>> subsec(vector<int> &arr, vector<int> &an,
                           vector<vector<int>> &res, int size) {
  if (size < 0) {
    res.push_back(an);
    return res;
  }
  int i = arr[size];
  an.push_back(i);
  vector<vector<int>> left = subsec(arr, an, res, size - 1);
  an.pop_back();
  vector<vector<int>> right = subsec(arr, an, res, size - 1);

  for (int i = 0; i < right.size(); i++) {
    left.push_back(right[i]);
  }
  return left;
}
int main() {
  vector<int> arr{1, 2, 3};
  vector<int> an;
  vector<vector<int>> res;
  int size = arr.size();
  subsec(arr, an, res, size - 1);
  for (auto subseq : res) {
    cout << "[";
    for (auto num : subseq)
      cout << num << ",";
    cout << "]" << endl;
  }
}
