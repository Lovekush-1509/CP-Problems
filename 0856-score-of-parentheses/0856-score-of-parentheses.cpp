class Solution {
public:
    int scoreOfParentheses(string s) {
       stack<pair<char,int>>st;
        int res = 0;
       for(auto ch:s){
        if(st.empty()){
            st.push({ch,1});
            continue;
        }

        if(ch == ')'){
            int temp = 0;
            while(st.top().first == '*'){
                temp += st.top().second;
                st.pop();
            }
            st.pop();
            if(!temp){
                temp = 1;
            }else{
                temp = temp*2;
            }
            st.push({'*',temp});
        }else if(ch == '('){
            st.push({ch,1});
        }

       }

       while(st.size()){
        res += st.top().second;
        st.pop();
       }

       return res;
    }
};