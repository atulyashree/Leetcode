class Solution {
public:
vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> temp;
        vector<int> vis(nums.size(),0);
        backtrack(temp, nums, vis);
        return ans;
    }

    void backtrack(vector<int>& temp, vector<int>& nums, vector<int>& vis)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                temp.push_back(nums[i]);
                backtrack(temp, nums, vis);
                vis[i]=0;
                temp.pop_back();
            }
        }
        

    }
};