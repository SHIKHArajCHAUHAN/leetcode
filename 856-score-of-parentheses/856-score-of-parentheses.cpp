class Solution {
public:
    int scoreOfParentheses(string s) {
      int open =0;
        int end=0;
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
        if(s[i]=='(')
        {open++;
          end=0;  
        }
            else 
            {open--;
             if(end==0)
              ans+=pow(2,open) ; 
             end=1;
            }
        }
        return ans;
    }
};