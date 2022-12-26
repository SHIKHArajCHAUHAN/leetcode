class Solution {
public:
    int numSteps(string s) {
      int res=0;
        int len=s.length();
       /* for(int i=0;i<len;i++)
        {
            n+=(s[i]-'0')*(pow(2,len-i-1));
        }
       while(n!=1)
        {
            if(n%2==0)n=n/2;
           else n+=1;
            res++;
        }
        return res;*/
    /// do binary sub if 1 + 1 =0 rem 1
        while (s.length() > 1)
        {
            if (s.back() == '1')
            {
          bool carry = 1;
                for (int i = s.length() - 1; i >= 0; i--)
                {
                    if (carry)
                    {
                        if (s[i] == '0')
                        {
                            s[i] = '1';
                            carry = 0;
                            break;
                        }
                        else
                        {
                            s[i] = '0';
                        }
                    }
                }
                if (carry)
                {
                    s = '1' + s;
                }
            }
            else
            {
                s.pop_back();
            }
            res++;
        }
        return res;
     
    }
};