#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
   
       int t;
       cin>>t;
       while(t--){
            int n;
            cin>>n;
            vector<int>a(n),b(n);
            for(int i = 0; i < n; i++){
                cin>>a[i];
            }
            for(int i = 0; i < n; i++){
                cin>>b[i];
            }
 
            long long res = 0;
            int aMin = *min_element(a.begin(),a.end());
            int bMin = *min_element(b.begin(),b.end());
            for(int i = 0; i < n; i++){
                if(a[i] != aMin && b[i] != bMin){
                    res += max(a[i]-aMin,b[i]-bMin);
                }else if(a[i] == aMin){
                    res += b[i]-bMin;
                }else if(b[i] == bMin){
                    res += a[i]-aMin;
                }
            }
 
            cout<<res<<endl;
       }
       
    return 0;
}