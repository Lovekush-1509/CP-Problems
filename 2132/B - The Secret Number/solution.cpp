#include<bits/stdc++.h>
using namespace std;
 
    long long value(long long i){
        return 1+pow(10,i);
    }
 
    
    int main(){
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            vector<long long>res;
            for(long long i = 10; i <= n; i *= 10){
                long long val = i+1;
                // if(val > n)break;
                if(n%val == 0)res.push_back(n/val);
            }
            sort(res.begin(),res.end());
            if(res.size() == 0)cout<<"0"<<endl;
            else {
                cout<<res.size()<<endl;
                for(auto x:res)cout<<x<<" ";
                cout<<endl;
            }
        }
    }
 