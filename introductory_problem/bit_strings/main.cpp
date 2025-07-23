#include<iostream>
#include<cmath>
using namespace std; 
const int MOD = 1000000007;
long long mpow(int base, int exponent){
  long long result = 1;
  if(exponent<0){
    return 0;
  }
  for(int i=1;i<=exponent;i++){
    result *= base;
    result = result % MOD;
  }
  return result;
}
int main(){
  int n;
  cin>>n;
  long long result = mpow(2,n);
  cout<<result<<endl;
}
