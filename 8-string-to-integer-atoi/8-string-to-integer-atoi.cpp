class Solution {
public:
    int myAtoi(string s) {
   /*     int i=0;
      while(!s.empty())
      {
          if(s[i]!='-'||s[i]!='+'||!isdigit(s[i]))
              erase(i);
          i++;
      }
        return stoll(s);*/
        
            int ans = 0, sign = 1, i = 0;
            long check = 0;
            while (s[i] == ' ') i++;
            if (s[i] == '-')
            {
                sign = -1;
                i++;
            }
            else if (s[i] == '+')
            {
                i++;
            }
            while (i < s.size() && s[i] >= '0'&& s[i] <= '9')

            
            {

                int digit = s[i] - '0';
                check = check *10 + digit;
                check *= sign;

                if (check <= INT_MIN)
                {
                    return INT_MIN;
                }
                if (check >= INT_MAX)
                {
                    return INT_MAX;
                }
                check *= sign;

                ans = ans *10 + digit;
                i++;
            }
            return ans*sign;
    }
};