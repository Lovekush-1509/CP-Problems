#include<bits/stdc++.h>
using namespace std;
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long x = b;
        long long evenSum = -1;
        while(x > 0){
            long long val = (b/x+a*x);
            if(val%2 == 0){
                evenSum = max(evenSum,val);
            }
 
            if(x%2 != 0)break;
            x /= 2;
        }
 
        cout<<evenSum<<endl;
    }
}