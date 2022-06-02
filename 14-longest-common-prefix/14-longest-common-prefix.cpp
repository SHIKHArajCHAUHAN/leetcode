class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int n=strs.size();
        if(n==0)return "";
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        int minl=min(strs[0].size(),strs[n-1].size());
        string f=strs[0], l=strs[n-1];
        int i=0;
        while(i<minl&&f[i]==l[i]) i++;
        string ans=f.substr(0,i);
        return ans;
    }
};