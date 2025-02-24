class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //this solution is mainly based on the observation
        int pfx=1, sfx=1, n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(pfx==0){
                pfx=1;
            }
            if(sfx==0){
                sfx=1;
            }
            pfx*=nums[i];
            sfx*=nums[n-i-1];
            maxi=max(maxi, max(pfx,sfx));
            
        }
        return maxi;
    }
};