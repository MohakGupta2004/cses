#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  vector<int> t(m);
  int max_element;
  vector<int> max;
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> t[i];
  }
  sort(h.begin(), h.end());
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (h[i] <= t[j]) {
      max_element = h[i];
      i++;
      j++;
    } else {
      i++;
    }
  }

  for (int i = 0; i < max.size(); i++) {
    cout << max[i] << endl;
  }
}
