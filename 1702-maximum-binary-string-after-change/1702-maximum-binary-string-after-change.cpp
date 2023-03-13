class Solution {
public:
    string maximumBinaryString(string s) {
        int n=s.length();
     string ans(n,'1');
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') cnt++;
        }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ans[i+cnt-1]='0';
            return ans;
        }
    }
        return ans;
    }
};