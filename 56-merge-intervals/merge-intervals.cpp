class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int start=intervals[0][0];
        int end= intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=end)
            {
                end=max(intervals[i][1], end);
            }
            else
            {
                ans.push_back({start,end});
                start= intervals[i][0];
                end= intervals[i][1];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};