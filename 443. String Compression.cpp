class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n <= 1)
            return n;
        int i = 0;
        for(int j=0;j<n;j++){
            int count = 1;
            while(j < n-1 && chars[j] == chars[j+1]){
                count++;
                j++;
            }
            chars[i++] = chars[j];  
            if(count!=1){
                for(auto d: to_string(count))
                    chars[i++] = d;
            }
        }
        return i;
    }
};
