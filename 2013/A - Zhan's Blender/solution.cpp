#include<bits/stdc++.h>
using namespace std;
 
int solve(int n,int x,int y){
	int mini = min(x,y);
	int timeReq = n/mini;
	if(n%mini != 0)timeReq++;
	return timeReq;
}
 
int main(){
    	int t;
	cin>>t;
	while(t--){
		int n,y,x;
		cin>>n>>x>>y;
		cout<<solve(n,x,y)<<endl;
	}
}