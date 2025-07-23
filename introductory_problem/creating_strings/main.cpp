#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<string> ans;
  sort(s.begin(), s.end());
  ans.push_back(s);
  while (next_permutation(s.begin(), s.end())) {
    ans.push_back(s);
  }

  cout << ans.size() << endl;
  for (string i : ans) {
    cout << i << endl;
  }
}
