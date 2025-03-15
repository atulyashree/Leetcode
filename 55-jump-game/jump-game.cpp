class Solution {
public:
    bool canJump(vector<int>& nums) {

        //we will see if at any point out pointer i exceeds the reachable value
        int reachable=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>reachable)
            {
                return false;//since i crossed max reachable so not possible to come till this index.
            }
            else
            {
                reachable=max(reachable,i+nums[i]);//represents max element we can reach
            }
        }
        return true;
    }
};