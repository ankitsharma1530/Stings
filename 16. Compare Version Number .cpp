int VersionCompare(string v1, string v2) 
{
    int n = v1.length();
    int m = v2.length();
    int i=0;
    int j=0;
    while(i<n || j<m)
    {
        int num1 = 0;
        while(i<n && v1[i]!='.')
        {
            num1 = num1*10 + v1[i]-'0';
            i++;
        }
        int num2 = 0;
        while(j<m && v2[j]!='.')
        {
            num2 = num2*10 + v2[j]-'0';
            j++;
        }
        if(num1>num2)
        {
            return 1;
        }
        else if(num1<num2)
        {
            return -1;
        }
        else
        {
            i++;
            j++;
        }
    }
    return 0;
}
