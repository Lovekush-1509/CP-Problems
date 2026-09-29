#include<bits/stdc++.h>
using namespace std;
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,y,r;
        cin>>n>>y>>r;
        if((y/2)+r >= n)cout<<n<<endl;
        else cout<<(y/2)+r<<endl;
    }
}