class Solution {
public:
    bool isValid(string s) {
      stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch!='c')
            {
                st.push(ch);
               
            }
            else {
                if(st.size()<2) return false;
                if(st.top()!='b') return false;
                st.pop();
                if(st.top()!='a') return false;
                st.pop();
            }
        }
        return st.size()==0;
    }
};