class Solution {
public:
    string makeGood(string s) {
       stack<char>c;
        string str;
        for(int i=0;i<s.length();i++)
        {
            if(c.empty())
            {
               c.push(s[i]); 
            }
            else
            {
                if(abs(c.top()-s[i])==32)
                   {
                       c.pop();
                   }
                   else
                   {
                       c.push(s[i]);
                   }
                
            }
        }
                   while(!c.empty())
                   {
                       str+=c.top();
                       c.pop();
                   } reverse(str.begin(),str.end());
                   return str;
    }
};