#include<bits/stdc++.h>
using namespace std;
 
int solve(vector<int> &a, int k) {
    int n = a.size();
    int maxDiff = a[0];
    for(int i = 1; i < n; i++){
        maxDiff = max(maxDiff,a[i] - a[i-1]);
    }
    return max((k - a[n-1])*2,maxDiff);
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>numbers;
        for(int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            numbers.push_back(temp);
        }
       cout<<solve(numbers,x)<<endl;
    }
}
 