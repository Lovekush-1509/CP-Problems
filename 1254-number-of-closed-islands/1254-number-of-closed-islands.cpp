class Solution {

    bool onCorner(int i,int j,int n,int m){
        return (i == 0 || i == n-1 || j == 0 || j == m-1);
    }

    bool isValid(int i,int j,int n,int m,vector<vector<int>>& grid){
        return (i >= 0 && i < n && j >= 0 && j < m && (grid[i][j] == 0));
    }

    bool bfs(int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& vis){
        queue<pair<int,int>>q;
        vector<vector<int>>dir = {{0,1},{0,-1},{-1,0},{1,0}};
        int n = grid.size(),m = grid[0].size();
        q.push({i,j});
        bool check = true;
        vis[i][j] = true;
        // cout<<i<<":"<<j<<endl;
        while(q.size()){
            auto front = q.front();
            int x = front.first;
            int y = front.second;
            q.pop();

            if(onCorner(x,y,n,m)){
                check = false;
            }

            for(auto d:dir){
                int newX = d[0]+x;
                int newY = d[1]+y;
                if(isValid(newX,newY,n,m,grid) && !vis[newX][newY]){
                    vis[newX][newY] = true;
                    q.push({newX,newY});
                }

            }

        }
        return check;
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));

        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!grid[i][j] && !vis[i][j]){
                    res += bfs(i,j,grid,vis);
                }
            }
        }

        return res;
        
    }
};