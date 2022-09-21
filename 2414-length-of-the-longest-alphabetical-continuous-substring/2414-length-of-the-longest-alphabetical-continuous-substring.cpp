class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.length();
    //  vector<int>v(n,1);
        int ans=1;
        int maxx=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]-s[i-1]==1)
                ans++;
            else ans=1;
               // v[i]=v[i-1]+1;
            maxx=max(maxx,ans);
        }
       // return *max_element(v.begin(),v.end());
        return maxx;
    }
};