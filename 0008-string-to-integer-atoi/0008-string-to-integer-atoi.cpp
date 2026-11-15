class Solution {

   int makeInRange(long long num){
       if(num > INT_MAX){
            num = INT_MAX;
        }else if(num < INT_MIN){
            num = INT_MIN;
        }

        return num;
   }
public:
    int myAtoi(string s) {
        int n = s.length(), res = 0;
        string str = "";
        int j = 0;
        bool isNegative = false;
        for(int i = 0; i < n; i++){
            if(s[i] >= '0' && s[i] <= '9'){
                j = i;
                break;
            }else if(s[i] == '+'){
                j = i+1;
                break;
            }else if(s[i] == '-'){
                j = i+1;
                isNegative = true;
                break;
            }else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '.'){
                return 0;
            }
        }

        if(s[j] >= '0' && s[j] <= '9'){
            res = s[j++] - '0';
        }
            if(isNegative){
                res = -1*(res);
            }

        while(j < n && (s[j] >= '0' && s[j] <= '9')){
            int num = s[j] - '0';
            if(isNegative){
                res = makeInRange((long long)(res)*10 - num);
            }else{
                 res = makeInRange((long long)(res)*10 + num);
            }
            // cout<<res<<" ";
            j++;
        }

     return (res);
    }
};