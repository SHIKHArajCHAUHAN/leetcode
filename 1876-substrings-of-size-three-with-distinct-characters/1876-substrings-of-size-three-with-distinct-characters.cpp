class Solution {
public:
    int countGoodSubstrings(string s) {
      int count=0;
        string st="";
        int n=s.length();
        for(int i=0;i<n-2;i++)
        {
            
        
        if(s[i]!=s[i+1]&&s[i+1]!=s[i+2]&&s[i]!=s[i+2])
        
            count++;
        
       /* for(int i=3;i<n;i++)
        {
            st=st-s[i-3];
            st+=s[i];
    if(st[0]!=st[1]&&st[1]!=st[2]&&st[0]!=st[2])
    {
        count++;
    }
        }*/
        }
        return count;
    }
};