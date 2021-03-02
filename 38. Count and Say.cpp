class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        {
            return "1";
        }
        if(n==2)
        {
            return "11";
        }
        string res = "11";
        for(int i=3;i<=n;i++)
        {
            string temp = "";
            
            for(int ii=0;ii<res.length();ii++)
            {
                int count = 1;
                while(ii<res.length()-1 && res[ii]==res[ii+1])
                {
                    count++;
                    ii++;
                }
                temp = temp+to_string(count)+res[ii]; 
            }    
            
            res = temp ;
        }
        return res;
        
    }
};
