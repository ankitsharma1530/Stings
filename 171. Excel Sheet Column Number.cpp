class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.length()-1;
        int num = 0;
        int j = 0;
        while(n>=0)
        {
            int i = columnTitle[n]-'A'+1;
            num = num + pow(26,j)*i;
            n--;
            j++;
        }       
        return num;
    }
};
