#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n; 
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)cin>>v[i];
    vector<int>odd,even;
    for(int i = n-1; i >= 0; i--){
      if(v[i]%2 == 0){
        even.push_back(v[i]);
      }
    }
    for(int i = n-1; i >= 0; i--){
      if(v[i]%2 != 0){
        odd.push_back(v[i]);
      }
    }
    
    sort(odd.rbegin(),odd.rend());
    int evenSum = 0,oddSum = 0;
    for(int i = 0; i < even.size(); i++)evenSum += even[i];
    int size = odd.size();
    if(size%2 == 0){
      size--;
    }
    
    for(int i = 0; i < size; i++){
      oddSum += odd[i];
    }
    
    if((oddSum+evenSum)%2 != 0)cout<<oddSum+evenSum<<endl;
    else cout<<0<<endl;
    
}
 
// 3 7 5 1 - 16
// 2 4 6 8 - 12