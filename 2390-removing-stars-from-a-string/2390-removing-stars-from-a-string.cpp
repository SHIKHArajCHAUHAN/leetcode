class Solution {
public:
    string removeStars(string s) {
      stack<char>st;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='*')
               st.pop();
            else st.push(s[i]);
        }
        s.clear();
        int n=st.size();
        for(int i=0;i<n;i++)
        {
           s.push_back(st.top());st.pop(); 
        }
    reverse(s.begin(),s.end());
        return s;
    }
};