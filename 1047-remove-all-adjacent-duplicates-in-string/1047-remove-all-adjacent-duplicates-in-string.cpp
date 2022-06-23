class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>a;
        string ans;
    for(int i=0;i<s.length();i++)
    {
        if(a.empty())
            a.push(s[i]);
        else
        {
            if(a.top()==s[i])
                a.pop();
         else
             a.push(s[i]);
        }
        
    }
        while(!a.empty())
        {
          ans+=a.top();
            a.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};