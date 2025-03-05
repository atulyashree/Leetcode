class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[low]<=nums[mid])//if left half is sorted taking mininum and then going to other half for check
            {
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else//if right half is sorted taking the min and then going to other half for check
            {
                ans=min(ans,nums[low]);
                high=mid;
            }
        }
        return ans;
    }
};