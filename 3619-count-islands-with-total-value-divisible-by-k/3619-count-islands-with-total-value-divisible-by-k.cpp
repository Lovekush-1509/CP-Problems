class Solution {

    bool isSafe(int i,int j,vector<vector<int>>& grid){
        int m = grid.size(), n = grid[0].size();
        return (i >= 0 && j >= 0 && i < m && j < n && grid[i][j] > 0);
    }

    long long bfs(int i,int j,vector<vector<int>>& grid){
        long long sum = grid[i][j];
        grid[i][j] = 0;
        vector<vector<int>>dir = {{-1,0},{0,-1},{0,1},{1,0}};
        queue<pair<int,int>>q;
        q.push({i,j});
        while(q.size()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int k = 0; k < 4; k++){
                int newX = x+dir[k][0],newY = y+dir[k][1];
                if(isSafe(newX,newY,grid)){
                    sum += grid[newX][newY];
                    grid[newX][newY] = 0;
                    q.push({newX,newY});
                }
            }
        }

        return sum;
        
    }
    
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] > 0){
                    long long sum = bfs(i,j,grid);
                    if(sum%k == 0)count++;
                }
            }
        }

        return count;
    }
};