class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //this solution we are moving in the opposite direction unlike the other questions
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1,0));
        for(int idx=n-1;idx>=0;idx--)//since we move from n-1 to 0
        {
            for(int prev=idx-1;prev>=-1;prev--)//since we move from n-2 to -1
            {
                int notTake = 0 + dp[idx+1][prev+1];//doing the coordinate shift for prev
                int take=0;
                if(prev==-1 || nums[idx]>nums[prev])
                {
                    take = 1 + dp[idx+1][idx+1];//doing the coordinate shift for prev
                }
                dp[idx][prev+1]= max(take, notTake);
            }
        }
        return dp[0][-1+1];//necessary co ord shift
    }

};