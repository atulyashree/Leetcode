class Solution {
public:
    int climbStairs(int n) {
        int prev=1, prev2=1;
        for(int i=2;i<=n;i++)
        {
            int totalWays=prev+prev2; 
            prev2=prev;
            prev=totalWays;
        }
        return prev;
    }
};