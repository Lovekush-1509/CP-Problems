class Solution {

    int solve(int i,vector<int>&costs,vector<int> &memo){
        // base case
        int n = costs.size();
        if(i == n-1)return 0;

        
        // memo case
        if(memo[i+1] != -1){
            return memo[i+1];
        }

        // computation
        int mini = 1e9;
        for(int j = i+1; j <= min(i+3,n-1); j++){
            mini = min(mini,(j-i)*(j-i)+costs[j]+solve(j,costs,memo));
        }

        return memo[i+1] = mini;
    }

public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>memo(n+1,-1);
        return solve(-1,costs,memo);
    }
};