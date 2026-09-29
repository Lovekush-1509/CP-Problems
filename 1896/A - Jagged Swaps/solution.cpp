#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>perm(n);
        for(int i = 0; i < n; i++){
            cin>>perm[i];
        }
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            mini = min(mini,perm[i]);
        }
 
        if(mini != perm[0]){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
 
    }
}
 