class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx=0;
        vector<vector<int>> ans;
        vector<int> temp;
        solve(idx, candidates, target, ans, temp);
        return ans;
    }

    void solve(int idx, vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& temp)
    {
        if(idx==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(temp);
            }
            return;
        }

        if(target>=candidates[idx])
        {
            temp.push_back(candidates[idx]);
            solve(idx, candidates, target-candidates[idx], ans, temp);
            temp.pop_back();
        }

        //temp.pop_back();
        solve(idx+1, candidates, target, ans, temp);
    }
};