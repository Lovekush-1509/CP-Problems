class Solution {
public:
    int sumCounts(vector<int>& nums) {
        
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int>un;
            for(int j = i; j < nums.size(); j++){
                un.insert(nums[j]);
                res += un.size()*un.size();
            }
        }
        return res;
    }
};