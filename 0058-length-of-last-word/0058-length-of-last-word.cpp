class Solution {
public:
    int lengthOfLastWord(string s) {
       int res = 0;
       int n = s.length();
       int i=n-1; 
       bool isPassed = false;
       while(i >= 0){
            if(s[i] != ' '){
                res++;
                isPassed = true;
            }else{
                if(isPassed){
                    return res;
                }
            }
            i--;
       }
       return res;
    }
};