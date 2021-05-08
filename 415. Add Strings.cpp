class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string res = "";
        int carry = 0;
        int i=0;
        int j =0;
        while(i<num1.length() && j<num2.length())
        {
            int temp = (num1[i]-'0')+ (num2[j]-'0')+carry;
            carry = temp/10;
            int num = temp%10;
            res+=(to_string(num));
            i++;
            j++;
        }
        while(i<num1.length())
        {
            int temp = (num1[i]-'0')+carry;
            res+=(to_string(temp%10));
            carry = temp/10;
            i++;
        }
        while(j<num2.length())
        {
            int temp = (num2[j]-'0')+carry;
            res+=(to_string(temp%10));
            carry = temp/10;
            j++;
        }
        if(carry!=0)
        {
            res+=to_string(carry);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
