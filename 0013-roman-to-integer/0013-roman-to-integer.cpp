class Solution {
public:
    int romanToInt(string s) {
       int ans=0,i=s.length()-1,prev=0;
    while(i>=0){
        int temp;
        if(s[i]=='I'){
            temp=1;
        }
        else if(s[i]=='V'){
            temp=5;
        }
        else if(s[i]=='X'){
            temp=10;
        }
        else if(s[i]=='L'){
            temp=50;
        }
        else if(s[i]=='C'){
            temp=100;
        }
        if(s[i]=='D'){
            temp=500;
        }
        else if (s[i]=='M'){
            temp=1000;
        }
        if(temp<prev){
            ans-=temp;
        }else{
            ans+=temp;
        }
        prev=temp;
        i--;
    }
    return ans;
    }
};