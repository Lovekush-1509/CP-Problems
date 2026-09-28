#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        vector<int>arr(3);
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr.begin(),arr.end());
        cout<<min(arr[1]-arr[0],arr[2]-arr[1])<<endl;
        
    }
    return 0;
}