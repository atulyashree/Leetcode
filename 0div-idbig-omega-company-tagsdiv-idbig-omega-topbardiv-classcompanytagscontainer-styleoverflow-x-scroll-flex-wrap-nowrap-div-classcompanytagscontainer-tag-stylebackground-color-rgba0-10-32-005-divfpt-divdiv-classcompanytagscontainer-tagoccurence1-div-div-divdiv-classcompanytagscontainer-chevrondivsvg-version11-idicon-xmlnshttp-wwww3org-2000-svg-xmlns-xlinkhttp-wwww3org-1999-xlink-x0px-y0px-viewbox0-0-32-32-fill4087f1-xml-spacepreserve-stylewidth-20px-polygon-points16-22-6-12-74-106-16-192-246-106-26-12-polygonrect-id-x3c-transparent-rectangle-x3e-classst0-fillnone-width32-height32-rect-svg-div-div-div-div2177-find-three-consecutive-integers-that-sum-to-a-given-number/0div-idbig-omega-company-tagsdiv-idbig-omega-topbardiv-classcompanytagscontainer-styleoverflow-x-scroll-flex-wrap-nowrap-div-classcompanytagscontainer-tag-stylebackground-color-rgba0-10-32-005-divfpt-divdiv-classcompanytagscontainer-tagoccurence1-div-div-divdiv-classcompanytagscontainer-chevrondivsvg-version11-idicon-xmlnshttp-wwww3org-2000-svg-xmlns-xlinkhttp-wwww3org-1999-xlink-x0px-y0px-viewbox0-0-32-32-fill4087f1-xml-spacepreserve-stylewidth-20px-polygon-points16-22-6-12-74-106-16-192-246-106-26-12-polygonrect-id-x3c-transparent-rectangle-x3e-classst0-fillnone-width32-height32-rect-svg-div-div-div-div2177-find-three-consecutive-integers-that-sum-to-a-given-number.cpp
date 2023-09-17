class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        //let (x-1)+x+(x+1)=num
        //=>x=n/3, so it means if the number is divisible by 3, it can be a sum of three consecutive integers
        vector<long long> ans;
        if(num%3!=0)
        {
            return ans;
        }
        else
        {
            ans.push_back((num/3)-1);
            ans.push_back((num/3));
            ans.push_back((num/3)+1);
        }
        return ans;
    }
};