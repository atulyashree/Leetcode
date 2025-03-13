class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //we will run the recursion on the current idx and prev idx
        int idx=0, prev=-1;
        vector<vector<int>> dp(nums.size(), vector<int> (nums.size(),-1));
        int length=solve(idx, prev, nums, dp);
        return length;
    }
    int solve(int idx, int prev, vector<int>& nums, vector<vector<int>> &dp)
    {
        if(idx==nums.size())
        {
            return 0;
        }
        if(dp[idx][prev+1]!= -1)
        {
            return dp[idx][prev+1];
        }
        int notTake= 0 + solve(idx+1, prev, nums, dp);
        int take=0;
        if(prev == -1 || nums[prev]<nums[idx])
        {
            take= 1 + solve(idx+1, idx, nums, dp);
        }
        return dp[idx][prev+1]=max(take, notTake);
    }
};