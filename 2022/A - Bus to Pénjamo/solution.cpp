#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
      long long n,r;
      cin>>n>>r;
      long long even = 0,odd = 0;
      for(int i = 0; i < n; i++){
        int temp = 0;
        cin>>temp;
        if(!(temp&1)){
          even += temp;
        }else{
          even += temp-1; 
          odd++;
        }
      }
      
      long long remainSeat = r*2 - even;
      long long happy = even;
      if(odd >= remainSeat/2){
        happy += remainSeat-odd;
      }else{
        happy += odd;
      }
      cout<<happy<<endl;
      
      
    }
}