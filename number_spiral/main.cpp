// 1. maximum number = max^2
// 1.5. No of blocks = max+(max-1)
// 2. if max == odd:
//       minmum number = maximum - (noOfBlocks-1)
//    else 
//       minmum number = maximum + (noOfBlocks-1)
// 3. Check if the max is even or odd.
// 4. if it's odd
// 5.   if a = max:
//        b = b-1;
//        minmum += b
//        arr[i] = minmum
//      else b = max:
//        a = a - 1;
//        maximum -= a;
//        arr[i] = maximum
// 6. else it's even
//       if a = max:
//         b = b - 1;
//         maximum -= b;
//         arr[i] = maximum;
//       else b = max:
//         a = a -1;
//         minmum += a;
//         arr[i] = minmum;

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int isOdd(long long int num){
  return (num&1)==1;
}
int main(){
  long long int n,a,b;
  cin>>n;
  
  vector<long long int> arr(n);
  for(long long int i=0;i<n;i++){
    cin>>a>>b;
    long long int m = max(a,b);
    long long int maximum = m*m;
    long long int minmum = (m-1)*(m-1) + 1;
    if(isOdd(m)){
      if(a == m){
        b-=1;
        minmum += b;
        arr[i] = minmum;
      } else {
        a -= 1;
        maximum -= a;
        arr[i] = maximum;
      }
   } else {
      if(a==m){
        b -= 1;
        maximum -= b;
        arr[i] = maximum;
      } else {
        a = a - 1;
        minmum += a;
        arr[i] = minmum;
      }
    }
  }

  for(long long int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}
