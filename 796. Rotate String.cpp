class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length()!=B.length())
        {
            return false;
        }
        if(A.length()==0)
        {
            return true;
        }
        string temp = A+A;
        for(int i=0;i<temp.length();i++)
        {
            if(temp[i]==B[0])
            {
                int ii=0;
                int jj=i;
                while(ii<B.length() && jj<temp.length())
                {
                    if(temp[jj]==B[ii])
                    {
                        ii++;
                        jj++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(ii==B.length())
                {
                    return true;
                }
                
            }
        }
        return false;
    }
};
