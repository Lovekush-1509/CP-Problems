class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int And = -1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == (i))continue;
            And = (And & nums[i]);
        }

        return And == -1?0:And;
    }
};
// 11
// 10
// 01
// 00