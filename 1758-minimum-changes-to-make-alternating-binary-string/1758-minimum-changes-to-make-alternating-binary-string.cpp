class Solution {
public:
    int minOperations(string s) {
     string s1="";
        string s2="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {s1.push_back('0');s2.push_back('1');}
            else 
            {s1.push_back('1');s2.push_back('0');}
        }
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s1[i]) ans1++;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s2[i]) ans2++;
        }
        return min(ans1,ans2);
    }
};