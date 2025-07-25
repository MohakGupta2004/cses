#include <iostream>
#include <set>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  set<int> unique;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    unique.insert(x);
  }

  cout << unique.size() << '\n';
}
