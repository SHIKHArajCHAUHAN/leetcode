class Solution {
public:
    string makeGood(string s) {
       stack<char>c;
        string ankit;
        for(int i=0;i<s.length();i++)
        {
            if(c.empty())
            {
               c.push(s[i]); 
            }
            else
            {
                //mummyy h
                //muhh m kuchh thuns diya h....sry ankit 2 min
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
                       ankit+=c.top();
                       c.pop();
                   } reverse(ankit.begin(),ankit.end());
                   return ankit;
    }
};