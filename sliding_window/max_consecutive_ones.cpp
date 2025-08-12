#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxConsecutiveOnes(vector<int> arr, int k) {
  int maxlen = 0, start = 0, end = 0;
  int zeros = 0;

  while (end != arr.size() - 1) {
    if(arr[end] == 0) {
      zeros++;
    }
    if(zeros>k) {
      if(arr[start] == 0){
        zeros--;
      }
      start++;
    }
    if(zeros<= k){
      maxlen = max(maxlen, end - start + 1);
    }
    end++;
  }

  return maxlen;
}

int main() {
  vector<int> arr = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
  cout << maxConsecutiveOnes(arr, 2);
}
