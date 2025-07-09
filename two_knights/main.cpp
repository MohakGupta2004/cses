#include<iostream>
using namespace std;
long long int square(long long int n){
  return n*n;
}
int main(){
  long long int n;
  long long int result;
  cin>>n;

  for(int i=1; i<=n;i++){
    result = (square(i)*(square(i)-1)/2) - 4*(i-1)*(i-2);
    cout<<result<<endl;
  }
}
