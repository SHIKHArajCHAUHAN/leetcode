class Solution {
public:
    int countAsterisks(string s) {
       int cnt=0; 
          int bar=0;
    for(int i=0;i<s.size();i++)
    {
        if(bar%2==0 && s[i]=='*')
        cnt++;
        if(s[i]=='|')
        bar++;
    }
    return cnt; 
    }
};