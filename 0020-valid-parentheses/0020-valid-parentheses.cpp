class Solution {

    char check(char ch){
        if(ch == ')')return '(';
        else if(ch == ']')return '[';
        return '{';
    }

public:
    bool isValid(string s) {
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }

            if(s[i] == '(' || s[i] == '[' || s[i] == '{')st.push(s[i]);
            else {
                char top = st.top();
                if(top == check(s[i]))st.pop();
                else break;
            }
        }

        return st.empty();
    }
};