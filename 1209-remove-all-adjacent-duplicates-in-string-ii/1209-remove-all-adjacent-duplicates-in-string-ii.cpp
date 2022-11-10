class Solution {
public:
    string removeDuplicates(string s, int k) {
      stack<pair<char,int>>stk;
        for(int i=0;i<s.length();i++)
        {
            int cnt=0;
            if(stk.empty())
            {
              stk.push({s[i],1});  
            }
         else if(!stk.empty() && stk.top().first==s[i])
        {
            stk.top().second++;
            if(stk.top().second==k)
            stk.pop();
        } 
             else if(s[i]==stk.top().first)
        {
            stk.top().second++;
        }
        else
        {
            stk.push({s[i],1});
        }
        }
        string ans;
         while(!stk.empty())
    {
        int num=stk.top().second;
        char c=stk.top().first;
        while(num--)
        {
            ans+=c;
        }
        stk.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};