class Solution {
public:
    string decodeString(string s) {
            stack<char> st;
        string ans="";
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))cnt++;
        }
        if(cnt==n) return "";
        for(int i=0;i<n;i++)
        {   
            st.push(s[i]);
            if(s[i]==']')
            {
                st.pop();
                string temp="";
                while(!st.empty() && st.top()!='[')
                {
                    temp=st.top()+temp;
                    st.pop();
                }
                if(!st.empty())
                st.pop();
                string d="";
                while(!st.empty() && isdigit(st.top()))
                {
                    d=st.top()+d;
                    st.pop();
                }

                int num=stoi(d);
                string result="";
                while(num--)
                {
                    result+=temp;
                }

                for(auto c:result)
                {
                    st.push(c);
                }
            }
        }
        string temp="";
        while(!st.empty())
        {
            temp=st.top()+temp;
            st.pop();
        }

        ans+=temp;
        return ans;
  
    }
};