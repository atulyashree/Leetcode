class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(uset.find(nums[i])!=uset.end())
            {
                ans= nums[i];
            }
            else
            {
                uset.insert(nums[i]);
            }
        }
        return ans;
    }
};