#include<iostream>
using namespace std;

int main(){
  long long int n;
  cin>>n;

  while(n!=1){
    cout<<n;
    if (n<0){
      break;
    }
    cout<<" ";
    if((n&1)==0){
      n /= 2;
    } else{
      n *= 3;
      n++;
    } 
  }
  cout<<1;
}

