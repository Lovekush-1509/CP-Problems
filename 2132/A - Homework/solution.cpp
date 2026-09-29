#include<bits/stdc++.h>
using namespace std;
 
    
    int main(){
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            int n,m;
            string a,b;
            cin>>n>>a;
            cin>>m>>b;
            string turn;
            cin>>turn;
            int j = 0;
            string tmp = "";
            for(int i = 0;i < turn.length(); i++){
                if(turn[i] == 'D')a.push_back(b[j]);
                else {
                    tmp.push_back(b[j]);
                }
                j++;
            }
            reverse(tmp.begin(),tmp.end());
            a = tmp+a;
            cout<<a<<endl;
        }
    }