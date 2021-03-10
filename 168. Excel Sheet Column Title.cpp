class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        int n = columnNumber;
        if(n==1)
        {
            return "A";
        }
        while(n>0)
        {
            int rem = (n-1)%26;
            res.push_back(rem+'A');
            n = (n-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    
};
