#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
bool check_palindrome(vector<char> results) {
  int left = 0;
  int right = results.size() - 1;
  while (left < right) {
    if (results[left] != results[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}
int main() {
  string s;
  int count = 0;
  cin >> s;
  int size = s.length();
  unordered_map<char, int> freq;
  vector<char> results(s.length(), ' ');
  for (char c : s) {
    if (c != ' ') {
      freq[c]++;
    }
  }
  for (auto &pair : freq) {
    if ((pair.second & 1) == 1) {
      count++;
    }
  }
  if (count > 1) {
    cout << "NO SOLUTION" << endl;
    exit(0);
  }
  int i = 0;
  for (auto &pair : freq) {
    while (pair.second != 0) {
      if (pair.second == 1) {
        int mid = size / 2;
        results[mid] = pair.first;
        pair.second--;
      } else {
        results[i] = pair.first;
        results[size - 1 - i] = pair.first;
        pair.second -= 2;
        i++;
      }
    }
  }

  int exists = check_palindrome(results);
  if (exists) {
    for (char c : results) {
      cout << c;
    }
  } else {
    cout << "NO SOLUTION";
  }
  cout << endl;
}
