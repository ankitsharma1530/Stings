string MostFrequent(string paragraph, vector<string> taboo) 
{
    // Your Code
    unordered_set<string>s;
    for(int i=0;i<taboo.size();i++)
    {
        s.insert(taboo[i]);
    }
    map<string,int>ump;
    string temp = "";
    for(int i=0;i<paragraph.length();i++)
    {
        if(isalpha(paragraph[i]))
        {
            char c = tolower(paragraph[i]);
            temp.push_back(c);
        }
        else
        {
            if(s.find(temp)==s.end())
            {
                if(temp.length()>0)
                {
                    ump[temp]++;
                }
            }
            temp= "";
        }
    }
    if(temp.length()>0)
    {
        if(s.find(temp)==s.end())
        {
            ump[temp]++;
        }
    }
    string res ;
    int res_check = INT_MIN;
    for(auto it=ump.begin();it!=ump.end();it++)
    {
        if(it->second>res_check)
        {
            res = it->first;
            res_check = it->second;
        }
    }
    return res;
}
