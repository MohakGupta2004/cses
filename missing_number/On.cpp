#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int input;
    long long int missing_num=-1;
    long long int total = 0;
    long long int count = 0;
    for(long long int i = 0; i < n-1; i++) {
        cin >> input;
        total+=input;
        count+=i+1;
    }
    count+=n;
    missing_num = count-total;
    cout<<missing_num<<endl;
    return 0;
}
