class Solution {
public:
    int secondHighest(string s) {
     set<int>st;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]-'0')>=0&&(s[i]-'0')<=9)st.insert(s[i]-'0');
        }
        if(st.size()<=1) return -1;
  vector<int>v;
        for(auto i:st)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        return v[n-2];
        
    }
};