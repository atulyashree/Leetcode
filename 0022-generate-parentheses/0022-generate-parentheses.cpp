class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string str="";
        solve(0,0,n,str,ans);
        return ans;
    }
    
    void solve(int open, int close, int n, string str, vector<string> &ans)
    {
        //only add open parentheses if open<n
        //only add closing parentheses if close<open
        //if open==n==close, means a valid parentheses generated that can be pushed in ans
        if(open==close && open==n)
        {
            ans.push_back(str);
            return;
        }
        if(open < n)
        {
            str+='(';
            solve(open+1, close, n, str, ans);
            str.pop_back();
        }
        if(open>close)
        {
            str+=')';
            solve(open, close+1, n, str, ans);
            str.pop_back();
        }
        return;
    }
};