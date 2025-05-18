class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         a b c d --> array
// a ab abc abcd -->prefix
// d dc dcb dcba -->suffix
// abcd bcd cd d -->suffix(to be used)
//value= prefix[i-1]*suffix[i+1]
//leftarray(prefix) is the keeping the products from lhs and in rightarray(suffix) vice versa

        vector<int> prefix;
        vector<int> suffix;
        int pdt=1;
        for(int i=0;i<nums.size();i++)
        {
            pdt*=nums[i];
            prefix.push_back(pdt);
        }

        pdt=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            pdt*=nums[i];
            suffix.push_back(pdt);
        }
        reverse(suffix.begin(), suffix.end());

        vector<int> ans;

        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                ans.push_back(suffix[i+1]);
            }
            else if(i==nums.size()-1)
            {
                ans.push_back(prefix[i-1]);
            }
            else ans.push_back(prefix[i-1]*suffix[i+1]);
        }
        return ans;
    }
};