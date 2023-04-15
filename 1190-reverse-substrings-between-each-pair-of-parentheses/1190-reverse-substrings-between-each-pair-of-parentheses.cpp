class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                auto x=st.top();st.pop();
                reverse(s.begin()+x,s.begin()+i);
            }
        }
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='('&&s[i]!=')')str.push_back(s[i]);
        }
        return str;
    }
};