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
        int maxi = 0;
        for(int i = 0; i < n; i++){
            string newStr = s.substr(i)+s.substr(0,i);
            maxi = max(maxi,countBlocks(newStr));
        }
 
        cout<<maxi<<endl;
 
    }
    
 
}