class Solution {
public:
    int longestSubstring(string s, int k) {
       map<char,int>mp;
     /*   s.push_back('A');
        int len=0;
        for(auto i:s)
        {
            mp[i]++;
        }
        int j=0;
        int cnt=0;
        if(k==1) return s.length()-1;
        for(int i=0;i<s.length();i++)
        {
            if(mp[s[i]]<k)
            {
                len=max(len,cnt);
                cnt=0;
                
            }
            else
            {
              cnt++;  
            }
            

        }
        return len;*/
        if(s.length()==0||s.length()<k) return 0;
        for(auto i:s)
        {
            mp[i]++;
        }
        int i=0;
        while(i<s.length()&&mp[s[i]]>=k)
            i++;
        if(i==s.length()) return s.length();
        int l=longestSubstring(s.substr(0,i),k);
        int r=longestSubstring(s.substr(i+1),k);
        return max(r,l);
    }
};