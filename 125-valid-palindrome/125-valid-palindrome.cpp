class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string str;
      for(int i=0;i<n;i++)
      {
          if(s[i]>='a'&&s[i]<='z') str+=s[i];
         else if(s[i]>='A'&&s[i]<='Z') str+=tolower(s[i]);
         else if(s[i]>='0'&&s[i]<='9') str+=s[i]; 
      }
        int n2=str.length();
        for(int i=0;i<n2/2;i++)
        {
            if(str[i]!=str[n2-i-1]) return false;
        }
        return true;
        
    }
};