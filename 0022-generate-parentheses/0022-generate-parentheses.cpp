class Solution {
    set<string>res;
    void solve(int n,string s){
        if(n == 0){
            res.insert(s);
            return;
        }

        for(int i = 0; i < s.size(); i++){
            string tmp = s.substr(0,i+1)+"()"+s.substr(i+1);
            solve(n-1,tmp);
        }

    }

public:
    vector<string> generateParenthesis(int n) {
        solve(n-1,"()");
        return {res.begin(),res.end()};
    }
};