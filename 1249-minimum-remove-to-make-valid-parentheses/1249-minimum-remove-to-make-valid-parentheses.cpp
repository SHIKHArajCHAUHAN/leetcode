class Solution {
public:
    string minRemoveToMakeValid(string s) {
       stack<char>st;
        int n=s.length(),c=0;
           for(int i=0; i<n; i++) {
            if(s[i] == ')') {
                if(c < 1) continue;
                else {
                    st.push(s[i]);
                    c--;
                    continue;
                }
            } 
            else if(s[i] == '(') c++;
            st.push(s[i]);
        }
        string str = "";
        while(!st.empty()) {
            char ch = st.top();
            st.pop();
            if(ch == '(' && c > 0) {
                c--;
                continue;
            }
            str += ch;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};