#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
ll subArraySums(vector<ll> arr, ll target) {
  int i = 0, sum = 0, count = 0;
  for (ll j = 0; j < arr.size(); j++) {
    sum += arr[j];
    while (sum > target) {
      sum -= arr[i];
      i++;
    }
    if (sum == target)
      count++;
  }

  return count;
}

int main() {
  ll n, x;
  cin >> n >> x;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << subArraySums(arr, x) << endl;
}
