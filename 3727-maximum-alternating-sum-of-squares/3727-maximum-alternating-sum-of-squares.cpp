class Solution {

    // self
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = abs(nums[i]);
        }

        sort(nums.begin(),nums.end());

        int i = 0,j = nums.size()-1;
        long long res  = 0;
        while(i < j){
            res += (1LL*nums[j]*nums[j]-1LL*nums[i]*nums[i]);
            j--;
            i++;
        }

        if(i == j)res += nums[i]*nums[i];

        return res;
    }
};