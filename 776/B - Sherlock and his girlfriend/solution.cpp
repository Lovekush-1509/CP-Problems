#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int n;
    cin>>n;
    vector<int>primes(n+2,1);
    primes[0] = primes[1] = 0;
    for(int i = 2; i*i <= n+1; i++){
      if(primes[i]){
        for(int j = i*2; j <= n+1; j+=i){
          primes[j] = 0;
        }
      }
    }
    
    if(n > 2)cout<<2<<endl;
    else cout<<1<<endl;
    for(int i = 2; i <= n+1; i++){
      if(primes[i]){
        cout<<1<<" ";
      }else{
        cout<<2<<" ";
      }
    }
    
    
}