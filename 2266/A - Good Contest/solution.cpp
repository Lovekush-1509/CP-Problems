#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(3,0);
        for(int i = 0; i < 3; i++){
            cin>>arr[i];
        }
        
        int mini = min(min(arr[0],arr[1]),arr[2]);
        cout<<(n-mini)<<endl;
    }
    return 0;
}