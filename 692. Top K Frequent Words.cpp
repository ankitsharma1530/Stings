class Solution {
public:
    static bool comp(pair<int,string>p1 , pair<int,string>p2)
    {
        if(p1.first>p2.first || (p1.first==p2.first && p1.second<p2.second))
        {
            return true;
        }
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>ump;
        for(int i=0;i<words.size();i++)
        {
            ump[words[i]]++;
        }
        vector<pair<int,string>>vec;
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            vec.push_back(make_pair(it->second,it->first));
        }
        sort(vec.begin(),vec.end(),comp);
        vector<string>res;
        int i=0;
        while(i<k)
        {
            
            res.push_back(vec[i].second);
            i++;
        }
        return res;
    }
};
