class Solution {
    vector<int>res;
    bool isBalance(vector<int>&arr,string seq,bool zero){
        stack<char>st;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] && zero)continue;
            if(st.empty()){
                st.push(seq[i]);
                continue;
            }

            char top = st.top();
            if(seq[i] == ')' && top == '('){
                st.pop();
            }else{
                st.push(seq[i]);
            }

        }

        return st.empty();
    }


    

public:
    vector<int> maxDepthAfterSplit(string seq) {
        int a = 0,b = 0;
        vector<int>res(seq.size(),0);
        for(int i = 0; i < seq.size(); i++){
            if(seq[i] == '('){
                if(a > b){
                    res[i] = 1;
                    b++;
                }else {
                    a++;
                }
            }else{
                if(a <= b){
                    res[i] = 1;
                    b--;
                }else {
                    a--;
                }
            }
        }

        return res;
    }
};