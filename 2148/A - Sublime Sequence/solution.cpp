#include<bits/stdc++.h>
using namespace std;
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>x>>n;
        if(n%2 == 0)cout<<"0"<<endl;
        else cout<<x<<endl;
    }
}