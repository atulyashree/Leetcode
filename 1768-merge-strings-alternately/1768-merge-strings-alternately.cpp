class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int len;
        if(word1.length()>word2.length())
        {
            len= word1.length();
        }
        else
        {
               len= word2.length();
        }
        int i=0;
        while(i<word1.size() && i<word2.size())
        {
            ans+=word1[i];
            ans+=word2[i];
            i++;
        }
        if(i==word1.size())
        {
            while(i<word2.size())
            {
                ans+=word2[i];
                i++;
            }
        }
        else if(i==word2.size())
        {
            while(i<word1.size())
            {
                ans+=word1[i];
                i++;
            }
        }
        return ans;
    }
};