#include<bits/stdc++.h>
using namespace std;
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        long long score = m;
        int error = 0;
        for(int i = 0; i < n; i++){
            int minute,side;
            cin>>minute>>side;
            if( (minute%2 == 0 && side != 0 && error == 0) || (minute%2 != 0 && side != 1 && error == 0)){
                score--;
                error = 1;
            }else if((minute%2 == 0 && side == 0 && error == 1) || (minute%2 != 0 && side == 1 && error == 1)){
                error = 0;
                score--;
            }
        }
        cout<<score<<endl;
    }
}