#include<bits/stdc++.h>
using namespace std;
 
    long long cost(int x){
        return (pow(3,x+1)+x*(pow(3,x-1)));
    }
    
    int main(){
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
 
        vector<long long>deals;
        deals.push_back(1);
        for(int i = 1; i < 21; i++){
            deals.push_back(deals[i-1]*3);
            // cout<<deals[i]<<" ";
        }
 
        int t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            long long minCost = 0;
            int i = 20;
            while(n > 0){
                if(deals[i] <= n){
                    n -= deals[i];
                    minCost += cost(i);
                }else i--;
            }
            cout<<minCost<<endl;
        }
    }
 