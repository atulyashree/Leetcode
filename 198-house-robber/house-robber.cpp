class Solution {
public:
    int rob(vector<int>& nums) {
        //tabulation without space optimisation
        int n= nums.size(), sum;
        vector<int> dp(n);
        dp[0]=nums[0];
        int pick, npick;
        for(int i=1;i<n;i++)
        {
            pick=nums[i];
            if(i>1){
                pick+=dp[i-2];
            }
            npick=dp[i-1];
            dp[i]=max(pick, npick);
        }
        return dp[n-1];
    }
};