class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        int ans=solve(m-1,n-1,grid, dp);
        return ans;
    }

    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp)
    {
        if(i==0 && j==0)
        {
            return grid[i][j];
        }
        if(i<0 || j<0)
        {
            return INT_MAX;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }

        //taking the min of up path and left path
           return dp[i][j]=  grid[i][j] + min(solve(i-1,j, grid,dp), solve(i,j-1, grid,dp));
        
        
    }
};