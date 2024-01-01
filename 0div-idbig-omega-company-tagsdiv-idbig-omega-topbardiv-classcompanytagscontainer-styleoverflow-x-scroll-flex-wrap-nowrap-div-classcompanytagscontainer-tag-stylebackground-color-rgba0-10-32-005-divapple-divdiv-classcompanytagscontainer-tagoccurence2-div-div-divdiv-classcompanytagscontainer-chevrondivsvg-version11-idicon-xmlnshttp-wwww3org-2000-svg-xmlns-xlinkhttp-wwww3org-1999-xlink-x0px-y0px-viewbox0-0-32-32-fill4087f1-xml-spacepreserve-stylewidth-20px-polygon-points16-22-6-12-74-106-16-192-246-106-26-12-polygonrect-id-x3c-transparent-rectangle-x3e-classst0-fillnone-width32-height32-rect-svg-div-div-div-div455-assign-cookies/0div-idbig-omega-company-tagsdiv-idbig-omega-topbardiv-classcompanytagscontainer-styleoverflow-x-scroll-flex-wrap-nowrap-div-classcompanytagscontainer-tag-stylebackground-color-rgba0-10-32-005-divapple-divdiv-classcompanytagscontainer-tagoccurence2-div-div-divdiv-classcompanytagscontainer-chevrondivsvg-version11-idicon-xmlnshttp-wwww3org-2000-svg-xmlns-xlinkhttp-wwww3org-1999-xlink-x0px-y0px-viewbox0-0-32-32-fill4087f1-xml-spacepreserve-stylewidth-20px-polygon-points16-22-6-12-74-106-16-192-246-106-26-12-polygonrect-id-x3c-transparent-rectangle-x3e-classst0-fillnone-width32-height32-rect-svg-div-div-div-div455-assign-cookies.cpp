class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int ans=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int size=min(g.size(),s.size());
        int i=0,j=0;
        while(i<g.size() && j<s.size())
        {
            if(s[j]>=g[i])
            {
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};