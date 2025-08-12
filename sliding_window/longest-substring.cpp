#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s = "pwwkew";
  int i = 0, j = 0;
  int sum = 0;
  int len = 0;
  vector<bool> m(256, false);

  while (j < s.size()) {
    if (m[s[j]]) {
      while (i < j && s[i] != s[j]) {
        m[s[i]] = false;
        i++;
      }
      m[s[i]] = false;
      i++;
    }
    m[s[j]] = true;
    len = j - i + 1;
    sum = max(sum, len);
    j++;
  }

  cout << sum << endl;
}
