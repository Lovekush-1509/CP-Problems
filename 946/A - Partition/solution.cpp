#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
   
        int n;
        cin>>n;
        int finalAns = 0;
        for(int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            finalAns += abs(temp);
        }
 
        cout<<finalAns<<endl;
       
    return 0;
}