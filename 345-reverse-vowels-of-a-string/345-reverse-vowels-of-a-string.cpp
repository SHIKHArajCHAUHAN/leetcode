class Solution {
public:
    string reverseVowels(string s) {
      int n=s.length();
        int r=n-1;
        int i=0;
        while(i<r)
        {
    while(i<r&&s[i]!='a'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='e'&&s[i]!='A'&&s[i]!='E' &&s[i]!='I'&&s[i]!='O'&&s[i]!='U') i++;
             while(i<r&&s[r]!='a'&&s[r]!='i'&&s[r]!='o'&&s[r]!='u'&&s[r]!='e'&&s[r]!='A'&&s[r]!='E'&&s[r]!='I'&&s[r]!='O'&&s[r]!='U') r--;
    
        swap(s[i],s[r]);
         i++;r--;
            
        }
        return s;
    }
};