class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        //we will make a visited matrix
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j]=='1')
                {
                    cnt++;
                    bfs(i,j, vis, grid);
                }
            }
        }
        return cnt;
    }

    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
    {
        vis[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            //now traversing its neighbours and marking them as visited
            
            for(int delrow=-1;delrow<=1;delrow++)
            {
                for(int delcol=-1;delcol<=1;delcol++)
                {
                    int nrow=r+delrow;
                    int ncol=c+delcol;
                    
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' &&vis[nrow][ncol]==0 && abs(delrow)!=abs(delcol))//adding the last condition since digonal elements not considered int neighbours
                    {
                        if(nrow==r || ncol==c)// adding this since here diagonal elements are not considered aren't considered neighb, for 1 island
                        {
                            vis[nrow][ncol]=1;
                            q.push({nrow, ncol});
                        }
                    }
                }
            }
        }
    }
};