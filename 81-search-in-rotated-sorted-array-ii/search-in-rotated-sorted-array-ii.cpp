class Solution {
public:
    bool search(vector<int>& nums, int target) {
        //same as first part except one condition when low=mid=high
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;

            if(nums[mid]==target)
            {
                return true;
            }
            if(nums[low]==nums[mid] && nums[mid]==nums[high])
            {
                low++;
                high--;
                continue;//continue since if low becomes more than high means target not present and we need to come outta array
            }

//checking if the left half is sorted, if so finding the target in here
            else if(nums[low]<=nums[mid])
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
        return false;
    }
};