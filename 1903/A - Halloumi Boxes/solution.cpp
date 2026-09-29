#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n,0);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        if(k <= 1) {
          int i;
            for( i = 1; i < n; i++){
                if(arr[i] < arr[i-1]){
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(i == n)cout<<"YES"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}