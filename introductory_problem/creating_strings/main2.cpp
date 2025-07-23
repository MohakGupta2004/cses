#include <iostream>
#include <set>
#include <vector>
using namespace std;

void generatePermutation(string s, vector<bool> &visited, set<string> &ans,
                         string permutation) {
  if (permutation.length() == s.length()) {
    ans.insert(permutation);
    return;
  }

  for (int i = 0; i < visited.size(); i++) {
    if (!visited[i]) {
      visited[i] = true;
      generatePermutation(s, visited, ans, permutation + s[i]);
      visited[i] = false;
    }
  }
}

int main() {
  string s;
  cin >> s;
  set<string> ans;
  vector<bool> visited(s.size(), false);
  generatePermutation(s, visited, ans, "");
  cout << ans.size() << endl;
  for (string i : ans) {
    cout << i << endl;
  }
}
