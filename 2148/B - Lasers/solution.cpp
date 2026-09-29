#include<bits/stdc++.h>
using namespace std;
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        int crossing = 0;
        for(int i = 0; i < n; i++){
            int tmp;
            cin>>tmp;
            if(tmp >= 0 && tmp <= y)crossing++;
        }
        for(int i = 0; i < m; i++){
            int tmp;
            cin>>tmp;
            if(tmp >= 0 && tmp <= x)crossing++;
        }
 
        cout<<crossing<<endl;
    }
}