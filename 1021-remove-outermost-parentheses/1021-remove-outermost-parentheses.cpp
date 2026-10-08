class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int j = 0,left = 0;
        for(int i = 0; i < s.size(); i++){
            if(!left){
                left++;
                continue;
            }

            if(s[i] == '('){
                left++;
            }else{
                if(left == 1){
                    s[j] = '*';
                    s[i] = '*';
                    j = i+1;
                }
                left--;
            }

        }

        string res = "";
        for(auto ch:s){
            if(ch != '*'){
                res.push_back(ch);
            }
        }

        return res;
    }
};