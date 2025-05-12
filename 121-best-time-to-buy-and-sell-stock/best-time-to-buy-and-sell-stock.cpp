class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX, maxprof=0;
        for(int i=0;i<prices.size();i++)
        {
            if(minp > prices[i])
            {
                minp = prices[i];
            }
            int prof = prices[i] - minp;
            if(prof > maxprof)
            {
                maxprof = prof;
            }
        }

        return maxprof;
    }
};