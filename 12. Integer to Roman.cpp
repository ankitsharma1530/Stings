class Solution {
public:
    string intToRoman(int num) {
        vector<string>roman={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        vector<int>nums = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string res = "";
        for(int i=12;i>=0;i--)
        {
            while(num>=nums[i])
            {
                num = num-nums[i];
                res=res+roman[i];
            }
        }
        return res;
    }
};
