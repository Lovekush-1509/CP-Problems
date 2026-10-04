class Solution {

    bool solve(int i,string s,int left,vector<vector<int>>&memo){
        if(i == s.size()){
            return !left;
        }

        if(memo[i][left] != -1)return memo[i][left];

        bool a = false,b = false,c = false;
        if(s[i] == '('){
            a = solve(i+1,s,left+1,memo);
        }else if(s[i] == ')'){
            if(!left) return memo[i][left] = false;
            b = solve(i+1,s,left-1,memo);
        }else{
            a = solve(i+1,s,left+1,memo);
            if(left)b = solve(i+1,s,left-1,memo);
            c = solve(i+1,s,left,memo);
        }

        return memo[i][left] = (a||b||c);
    }

public:
    bool checkValidString(string s) {
        vector<vector<int>>memo(s.size()+1,vector<int>(s.size()+1,-1));
        return solve(0,s,0,memo);

    }
};