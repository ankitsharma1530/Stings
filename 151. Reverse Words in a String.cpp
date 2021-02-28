class Solution {
public:
    string reverseWords(string s) {
        vector<string>res;
        string temp = "";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                temp.push_back(s[i]);
            }
            else
            {
                if(temp.length()!=0)
                {
                    res.push_back(temp);
                }
                temp = "";
            }
        }
        if(temp.length()!=0)
        {
            res.push_back(temp);
        }
        string ans = "";
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            ans = ans+res[i]+' ';
        }
        ans.pop_back();
        return ans;
    }
};
