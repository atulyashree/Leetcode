class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> umap;

        for(int i=0;i<nums.size();i++){
            if(umap.find(target-nums[i])!=umap.end())//if target-nums[i] is found in the map
            {
                ans.push_back(i);//pushing the index
                ans.push_back(umap[target-nums[i]]);//pushing the value of the key found in map
            }
            umap[nums[i]]=i;//storing value at nums[i] along with its index
        }
        return ans;
    }
};