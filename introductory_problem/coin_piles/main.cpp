#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  long long int a, b;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (max(a, b) > 2 * min(a, b)) {
      arr[i] = 0;
    } else {
      if ((a + b) % 3 == 0) {
        arr[i] = 1;
      } else {
        arr[i] = 0;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
