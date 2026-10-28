class Solution {

    int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&memo){
        int n = grid.size(),m = grid[0].size();
        if(i == n-1 && j == m-1)return grid[i][j];

        if(memo[i][j] != -1)return memo[i][j];

        int a = 1e8,b = 1e8;
        if(i < n-1){
            a = solve(i+1,j,grid,memo)^grid[i][j];
        }

        if(j < m-1){
            b = solve(i,j+1,grid,memo)^grid[i][j];
        }


        return memo[i][j] = min(a,b);
    }


    int dpSolve(vector<vector<int>>& grid){
        int n = grid.size(),m = grid[0].size();
        vector<vector<unordered_set<int>>>dp(
            n,
            vector<unordered_set<int>>(m)
        );

        

        dp[0][0].insert(grid[0][0]);
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                for(auto val:dp[i][j]){
                    if((i+1) < n){
                        dp[i+1][j].insert(val^grid[i+1][j]);
                    }
                    if((j+1) < m)dp[i][j+1].insert(val^grid[i][1+j]);
                }
                
            }
        }

        int res = INT_MAX;

        for(auto v:dp[n-1][m-1]){
            res = min(res,v);
        }


        return res;
    }
    
public:
    int minCost(vector<vector<int>>& grid) {
        return dpSolve(grid);
    }
};