class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int tempDepth = 0;
        for(auto ch:s){
            if(ch == '('){
                tempDepth++;
            }else if(ch == ')')tempDepth--;

            depth = max(depth,tempDepth);
        }

        return depth;
    }
};