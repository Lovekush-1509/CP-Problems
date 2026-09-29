#include <bits/stdc++.h>
using namespace std;
 
int N = 3001;
 
int main() 
{
    int n;
    cin>>n;
    vector<set<int>>factors(n+1);
    for(int i = 6; i <= n; i++){
      set<int>temp;
        int num = i;
      for(int j = 2; j*j <= n; j++){
        while(num%j == 0){
          temp.insert(j);
          num /= j;
        }
      }
        if(num > 1)temp.insert(num);
      factors[i] = (temp);
    }
    long long count = 0;
    
    for(int i = 2; i < factors.size(); i++){
      // cout<<i<<" "<<factors[i].size()<<endl;
      if(factors[i].size() == 2)count++;
    }
    cout<<count<<endl;
    
}