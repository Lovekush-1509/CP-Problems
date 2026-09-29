#include<bits/stdc++.h>
using namespace std;
 
int countBlocks(string s){
    int i = 0;
    int n = s.size();
    int blocks = 1;
    i = 1;
    while(i < n){
        if(s[i] != s[i-1]){
            blocks++;
        }
        i++;
    }
 
    return blocks;
}
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
 
    // code start
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ones = 0,zeros = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0')zeros++;
        }
 
        ones = n-zeros;
        
        if(zeros%2){
            
            cout<<zeros<<endl;
 
            for(int i = 0; i < n; i++){
                if(s[i] == '0'){
                    cout<<(i+1)<<" ";
                }
            }
 
            cout<<endl;
 
        }else if((ones%2) == 0){
            cout<<ones<<endl;
            for(int i = 0; i < n && ones > 0; i++){
                if(s[i] == '1')cout<<(i+1)<<" ";
            }
            if(ones > 0)cout<<endl;
 
        }else cout<<"-1"<<endl;
 
    }
    
 
}
// 100