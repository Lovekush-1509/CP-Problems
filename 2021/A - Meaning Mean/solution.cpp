#include<bits/stdc++.h>
using namespace std;
 
 
 
int solve(int n,vector<int>&arr){
  sort(arr.begin(),arr.end());
  int ans = arr[0];
  for(int i = 1; i < n; i++){
    ans = (ans+arr[i])/2;
  }
  return ans;
}
 
int main(){
    	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		cout<<solve(n,arr)<<endl;
	}
}