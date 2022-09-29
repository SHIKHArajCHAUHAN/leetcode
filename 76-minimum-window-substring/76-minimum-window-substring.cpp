class Solution {
public:
    string minWindow(string s, string t) {
       map<char,int>mp;
        for(auto i:t)
        {
            mp[i]++;
        }
        int start=0,end=INT_MAX,i=0,j=0;
        int n=t.size();
        while(i<s.size())
        {
            if(mp[s[i++]]-->0) n--;
            while(n==0)
            {
                if(i-j<end) end=i-(start=j);
                
                if(mp[s[j++]]++==0) n++;
            }
        }
        if(end==INT_MAX) return "";
        else return s.substr(start,end);
    }
};