class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int a;
        for(int i=0;i<nums.size();i++)
        {
            a=abs(nums[i])-1;
            nums[a]=-1*abs(nums[a]); 
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};