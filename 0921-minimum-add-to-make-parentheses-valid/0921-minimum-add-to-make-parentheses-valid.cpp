class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;

        for(auto ch:s){
            if(st.empty()){
                st.push(ch);
                continue;
            }

            if(ch == ')'){
                if(st.size() && st.top() == '(')st.pop();
                else st.push(')');
            }else{
                st.push('(');
            }
        }

        return st.size();
    }
};