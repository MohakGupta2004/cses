#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n, sum=0;
  int result;
  cin>>n;
  sum = n*(n+1)/2;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    arr[i] = i+1;
  }
  if(sum%2==0){
    cout<<"YES"<<endl;
  if((n&1)==0){
    cout<<n/2<<endl;
    for(int i=0;i<n/2;i+=2){
      cout<<arr[i]<<" "<<arr[(n-1)-i]<<" ";
    }
    cout<<endl;
    cout<<n/2<<endl;
    for(int i=0;i<n/2;i+=2){
      cout<<arr[i+1]<<" "<<arr[(n-1)-(i+1)]<<" ";
    }
    cout<<endl;
  } else {
    cout<<n-(n/2)<<endl;
    for(int i=0;i<(n-1)/2;i+=2){
      cout<<arr[i]<<" "<<arr[(n-2)-i]<<" ";
    }
    cout<<endl;
    cout<<n/2<<endl;
    for(int i=0;i<((n-1)/2)-1;i+=2){
      cout<<arr[i+1]<<" "<<arr[(n-2)-(i+1)]<<" ";
    }
    cout<<n<<endl;
  }
  } else {
    cout<<"NO"<<endl;
  }
}
