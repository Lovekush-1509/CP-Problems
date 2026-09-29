#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  vector<long long>v;
	  for(int i = 0; i < n; i++){
	    long long val;
	    cin>>val;
	    v.push_back(val);
	  }
	  sort(v.begin(),v.end());
	  vector<long long>res;
	  long long num = v[0]*v[n-1];
    for(int i = 2; i*1LL*i <= num; i++){
      if(num%i == 0){
        if(num/i != i)res.push_back(num/i);
        res.push_back(i);
      }
    }
	  sort(res.begin(),res.end());
	  if(res == v)cout<<v[0]*v[n-1]<<endl;
	  else cout<<-1<<endl;
	}
}