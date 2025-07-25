#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m, k, count = 0;
  cin >> n >> m >> k;
  vector<int> applicant(n);
  vector<int> apartment(m);
  for (int i = 0; i < n; i++) {
    cin >> applicant[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> apartment[i];
  }
  sort(apartment.begin(), apartment.end());
  sort(applicant.begin(), applicant.end());
  int i = 0, j = 0;
  while (i < n && j < m) {
    if ((apartment[j] + k) < applicant[i]) {
      j++;
    } else if (apartment[j] > (applicant[i] + k)) {
      i++;
    } else if (abs(apartment[j] - applicant[i]) <= k) {
      count++;
      i++;
      j++;
    }
  }

  cout << count << endl;
}
