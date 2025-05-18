class Solution {
public:
    void bfs(vector<vector<char>> grid, vector<vector<bool>>& vis, int& cnt,int l,int m){
        queue<pair<int,int>> q;
        int x[] = {-1,0,+1,0};
        int y[] = {0,+1,0,-1};
        if(grid[l][m]=='1' && !vis[l][m]){
            q.push({l,m});
            cnt++;
        }
        vis[l][m] = true;
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int neighrow = row+x[i];
                int neighcol = col+y[i];
                if(neighrow>=0 && neighrow<grid.size() && neighcol>=0 && neighcol < grid[0].size() && grid[neighrow][neighcol]=='1' && !vis[neighrow][neighcol]){
                    vis[neighrow][neighcol]=true;
                    q.push({neighrow,neighcol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        int cnt = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1' && !vis[i][j])   bfs(grid,vis,cnt,i,j);
            }
        }
        return cnt;
    }
};