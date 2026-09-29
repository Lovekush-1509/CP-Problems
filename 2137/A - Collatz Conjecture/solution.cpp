#include<bits/stdc++.h>
using namespace std;
 
 
 
int solve(int n,int k){
    if(k == 0)return n;
 
    int a = INT_MIN;
    if(n%2 == 0 && (n-1)%3 == 0){
        a = solve(((n-1)/3),k-1);
    }
    int b = solve(n*2,k-1);
 
    if(a == INT_MIN)return b;
    return a;
}
 
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>k>>n;
 
        cout<<solve(n,k)<<endl;
        
    }
}