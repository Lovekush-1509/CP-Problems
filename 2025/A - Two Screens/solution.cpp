#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
      string s1,s2;
      cin>>s1>>s2;
      int i = 0;
      if(s1[0] != s2[0]){
        cout<<s1.length()+s2.length()<<endl;
        continue;
      }
      for(i = 0; i < s1.length() && i < s2.length(); i++){
        if(s1[i] != s2[i])break;
      }
      long long takenTime = 0;
      takenTime = i+1+s1.length()-i+s2.length()-i;
      cout<<takenTime<<endl;
    }
}
 