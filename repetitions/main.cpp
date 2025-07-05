#include<iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int count = 0;
    int max = 0;
    char inter;

    for(size_t i=0;i<str.length();i++){
      inter = str[i];
      if(inter == str[i+1]){
        count++;
        if(count > max) {
          max = count;
        }
      } else {
        count = 0;
      }
    }

    cout<<max+1<<endl;
    return 0;
}
 
