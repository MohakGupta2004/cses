#include<iostream>
#include<vector>
using namespace std;
int main(){
  long long int n, count=0, result=0;
  cin>>n;
  vector<long long int> arr(n);
  for(long long int i=0;i<n;i++){
    cin>>arr[i];
  }

  for(long long int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
      result = arr[i]-arr[i+1];
      count+=result;
      arr[i+1] += result;
    } 
  }

  cout<<count<<endl;

  return 0;
}
