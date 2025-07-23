#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    vector<long long int> arr(n-1);
    long long int missing_num=-1;
    for(long long int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(long long int i=0; i < n-1; i++){
      if(arr[i]!=i+1){
        missing_num = i+1;
        break;
      }
    }
    if(missing_num == -1) {
      missing_num = n;
    }
    cout<<missing_num<<endl;
    return 0;
}

