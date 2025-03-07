class Solution {
public:
    int rob(vector<int>& nums) {
        //0 to n-1
        if(nums.size()<3)
        {
            if(nums.size()==1)
            {
                return nums[0];
            }
            else{
                return max(nums[0],nums[1]);
            }
        }
        int prev=nums[0], prev2=0;
        int ans1, ans2, curr;
        for(int i=1;i<nums.size()-1;i++){
            curr=max(nums[i]+prev2, prev);
            prev2=prev;
            prev=curr;
        }
        ans1=curr;
        
        //1 to n
        prev=nums[1], prev2=0;
        for(int i=2;i<nums.size();i++){
            curr=max(nums[i]+prev2, prev);
            prev2=prev;
            prev=curr;
        }
        ans2=curr;
        return max(ans1,ans2);
    }
};