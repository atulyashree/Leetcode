class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
        {
            return 0;
        }
        int count=1,maxi=0;
        for(int i=1;i<nums.size();i++)
        {

            if(nums[i-1]+1==nums[i])
            {
                count++;
            }
            else 
            {
                if(nums[i-1]==nums[i])
                {
                    continue;
                }
                else
                {
                    maxi=max(count,maxi);
                    count=1;
                }
            }
        }
        maxi=max(count,maxi);
        return maxi;
    }
};