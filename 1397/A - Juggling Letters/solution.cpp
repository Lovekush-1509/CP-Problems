#include<bits/stdc++.h>
using namespace std;
 
bool check(vector<int>&count,int n){
    for(int i = 0; i < 26; i++){
        if(count[i]%n != 0)return false;
    }
    return true;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>count(26,0);
        for(int i = 0; i < n; i++){
            string str;
            cin>>str;
            for(int j = 0; j < str.length(); j++){
                int index = str[j]-'a';
                count[index]++;
            }
        }
        check(count,n) == 1?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}