class Solution {
public:
    int balancedStringSplit(string s) {
      int l,r,count=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R') count++;
            if(s[i]=='L') count--;
            if(count==0) ans++;
        }
        return ans;
    }
};