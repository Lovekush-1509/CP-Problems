#include <bits/stdc++.h>
using namespace std;
 
long long N = 1e6+1;
 
int main() 
{
    vector<bool>arr(N,true);
    arr[1] = 0;
    for(long long i = 2; i < N; i++){
      if(arr[i]){
        for(long long j = 2*i; j < N; j += i){
          arr[j] = false;
        }
      }
    }
    
    set<long long>st;
    for(long long i = 2; i < N; i++){
      if(arr[i])st.insert(i*i);
    }
    
    int n; 
    cin>>n;
    for(int i = 0; i < n; i++){
      long long val;
      cin>>val;
      if(st.find(val) != st.end())cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}