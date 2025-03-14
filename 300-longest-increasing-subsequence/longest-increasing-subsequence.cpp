class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n= nums.size();
        int maxi=1;
        vector<int> dp(n,1);//since by default all will have max len of 1 for thr increasing subsequence
        for(int idx=0;idx<n;idx++)//moving 0 to n-1
        {
            for(int prev=0;prev<=idx-1;prev++)//moving 0 to idx-1
            {
                if(nums[prev]<nums[idx])
                {
                    dp[idx]=max(dp[idx], 1+dp[prev]);//adding the length if any previous smaller element has more length than current length
                }
            }
            maxi=max(dp[idx],maxi);//taking maximum length from the lengths stored till now
        }
        return maxi;
    }
};