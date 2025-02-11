class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++)
        {
            if(ump.find(nums[i])!=ump.end())
            {
                int ab=i-ump[nums[i]];

                if(ab<=k)
                {
                    return true;
                }
            }
            ump[nums[i]]=i;
        }
        return false;
    }
};