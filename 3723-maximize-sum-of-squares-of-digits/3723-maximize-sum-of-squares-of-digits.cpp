class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res = "";

        for(int i = 0; i < num; i++){
            if(sum >= 9){
                res += "9";
                sum -= 9;
            }else{
                res += to_string(sum);
                sum -= sum;
            }
        }

        if(sum > 0)return "";

        return res;
    }
};