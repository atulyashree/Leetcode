class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[low]<=nums[mid])//checking if the left half is sorted, if so finding the target in here
            {
                if(nums[low]<=target && nums[mid]>=target)//if target lies in left half
                {
                    high=mid-1;
                }
                else
                    low=mid+1;
            }
            else//else obviously the second half is sorted and finding the element here
            {
                if(nums[mid]<=target && nums[high]>=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }

        }
        return -1;
    }
};