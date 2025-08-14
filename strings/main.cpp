#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// string largestGoodInteger(string &arr) {
//   int i = 0, j = 0, k = 3;
//   vector<string> sum;
//   string res = "";
//   while (i < arr.size() && j < arr.size()) {
//     if (arr[i] == arr[j]) {
//       res.push_back(arr[i]);
//       j++;
//     } else {
//       res = "";
//       i++;
//     }
//     int len = j - i;
//     if (len == k) {
//       sum.push_back(res);
//       res = "";
//       len = 0;
//     }
//   }
//   sort(sum.begin(), sum.end());
//   return sum[sum.size() - 1];
// }
string largestGoodInteger(string s) {
  string ans = "";
  for (int i = 0; i < s.size(); i++) {
    char digit = s[i];

    if (s[i + 1] == digit && s[i + 2] == digit) {
      string local = s.substr(i, 3);

      if (local > ans) {
        ans = local;
      }
    }
  }

  return ans;
}
int main() {
  string s = "3200014888";
  cout << largestGoodInteger(s);
}
