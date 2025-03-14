class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //this is using binary search, here we keep replacing the lower bound elemnt as 
        //soon as another element found less than the largest till now, otherwise add it to the tempo, hence we get the final length of the tempo as the 
        //the longest increasing subsequence although the elements stored in the tempo are not representing the LIS.
        vector<int> tempo;
        tempo.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>tempo.back())//if element is greater than the last element of temp found add it
            {
                tempo.push_back(nums[i]);
            }
            else//otherwise find lower bound element to replace it, since the tempo is sorted.
            {
                auto it=lower_bound(tempo.begin(), tempo.end(), nums[i]);//it returns the iterator of the lower bound of the element, i.e. first element>=nums[i]
                int idx=distance(tempo.begin(), it);//converting the iterator into index
                tempo[idx]=nums[i];
            }
        }
        return tempo.size();
    }
};