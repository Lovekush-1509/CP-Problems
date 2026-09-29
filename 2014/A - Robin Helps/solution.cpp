#include<bits/stdc++.h>
using namespace std;
 
int solve(int n,int k,vector<int>&arr){
	int gold = 0,res = 0;;
	for(int i = 0; i < n; i++){
		if(arr[i] >= k){
			gold += arr[i];
		}else if(arr[i] == 0 && gold > 0){
			res++;
			gold--;
		}
	}
 
	return res;
 
}
 
int main(){
    	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>arr(n);
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		cout<<solve(n,k,arr)<<endl;
	}
}