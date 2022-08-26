class Solution {
public:
    bool reorderedPowerOf2(int n) {
        map<string,int>mp;
        for(int i=0;i<32;i++)
        {
            long long x=pow(2,i);
            string s=to_string(x);
            sort(s.begin(),s.end());
            mp[s]++;
            
        }
        string st=to_string(n);
        sort(st.begin(),st.end());
        if(mp.find(st)!=mp.end())
        {
            return true;
        }
        return false;
        
    }
};