class Solution {
public:
    bool halvesAreAlike(string s) {
      int count1=0;
      int count2=0;
        int n=s.length();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E'){
                count1++;
            }
        }
        for(int i=n/2;i<n;i++)
        {      if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E')
        {
       count2++;
        }
             }
        if(count1==count2) return true;
        return false;
    }
};