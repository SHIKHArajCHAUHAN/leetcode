class Solution {
public:
    string longestNiceSubstring(string s) {
     int n=s.size();
      //  string st="";
          set<char>st(s.begin(), s.end());

       // string ans="";
        for (int i=0 ; i<n ; i++)
        {
            if (st.find(toupper(s[i])) == st.end() || st.find(tolower(s[i])) == st.end())
            {
                string prev = longestNiceSubstring(s.substr(0,i));
                string next = longestNiceSubstring(s.substr(i+1));
                if( prev.size() >= next.size()) return prev;
                else return next;
                
            }
        }
       return s;
   
    }
};
 