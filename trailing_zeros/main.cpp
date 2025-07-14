#include<iostream>
#include<string>
using namespace std;
int main(){
  long long int n, ans=0;
  cin>>n;
  double i=0.2;
  while((n*i)>0){
    ans += n*i;
    i = i/5;
  }
  cout<<ans<<endl;
}
