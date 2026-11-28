class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int threeSum = INT_MAX;
        for(int k = 0; k < n-2; k++){
            int i = k+1,j = n-1;
            while(i < j){
                int sum = nums[i]+nums[j]+nums[k];
                if(threeSum == INT_MAX || abs(target-threeSum) > abs(target-sum)){
                    threeSum = sum;
                }
                if(sum < target)i++;
                else j--;
            }
        }
        return threeSum;
    }
};

// -4 -1 1 2