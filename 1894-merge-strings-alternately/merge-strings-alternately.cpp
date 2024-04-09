class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //Or we can also take both lengths as n and m, then run them using single loop
        string ans;
        int n=word1.size(), m=word2.size();
        int len;
        if(n>m)
        {
            len=n;
        }
        else len=m;
        for(int i=0;i<len;i++)
        {
            if(i<word1.size())
            {
                ans+=word1[i];
            }
            if(i<word2.size())
            {
                ans+=word2[i];
            }
        }
        return ans;
    }
};