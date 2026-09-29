#include<bits/stdc++.h>
using namespace std;
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int fOne = 0,bOne = n-1,z = n-1;
        int ops = 0;
        while(fOne < z){
            if(s[z] != '0')z--;
            else if(s[fOne] != '1')fOne++;
            else if(s[bOne] != '1')bOne--;
            else{
                swap(s[bOne],s[z]);
                swap(s[fOne],s[bOne]);
                ops++;
            }
        }
        cout<<ops<<endl;
    }
}