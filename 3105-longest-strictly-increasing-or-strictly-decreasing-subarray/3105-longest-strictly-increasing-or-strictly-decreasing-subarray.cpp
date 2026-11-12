class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int length = 1;
        for(int i = 0; i < nums.size(); i++){
            int temp = 1;

            for(int j = i+1; j < nums.size(); j++){
                if(nums[j-1] < nums[j])temp++;
                else break;
            }

            length = max(length,temp);

            temp = 1;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j-1] > nums[j])temp++;
                else break;
            }

            length = max(length,temp);
        }
        return length;
    }
};