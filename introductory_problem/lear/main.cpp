#include <iostream>
#include <string>
using namespace std;

string skipChar(string s, string res, int n) {
  if (n < 0) {
    return res;
  }
  if (s[n] != 'a') {
    return skipChar(s, s[n] + res, n - 1);
  }
  return skipChar(s, res, n - 1);
}

int main() {
  string s = "baccad"; // bccd
  int n = s.size();
  cout << "N: " << n << endl;
  string res = "";
  cout << skipChar(s, res, n - 1) << endl;
}
