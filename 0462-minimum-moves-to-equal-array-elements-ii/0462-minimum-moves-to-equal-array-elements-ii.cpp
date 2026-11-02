class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int median = nums[nums.size()/2];
       if(nums.size()%2 == 0){
            median += nums[nums.size()/2-1];
            median /= 2;
       }
       int res = 0;
       for(int i = 0; i < nums.size(); i++){
            res += abs(median-nums[i]);
       }

       return res;
    }
};