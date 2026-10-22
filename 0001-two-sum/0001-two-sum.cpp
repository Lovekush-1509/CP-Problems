class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        int i = 0, j = 1;
        while(i < j){
            int sum = nums[i]+nums[j];
            if(sum == target){
                return {i,j};
            }
            j++;
            if(j == n){
                i++;
                j = i+1;
            }
        }
        return {-1};
    }
};
