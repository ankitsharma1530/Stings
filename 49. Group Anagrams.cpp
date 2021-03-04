class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>ump;
        for(string x:strs)
        {
            string temp = x;
            sort(temp.begin(),temp.end());
            ump[temp].push_back(x);
        }
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};
