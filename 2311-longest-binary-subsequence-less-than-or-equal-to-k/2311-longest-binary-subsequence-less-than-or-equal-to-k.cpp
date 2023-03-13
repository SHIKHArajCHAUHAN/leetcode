class Solution {
public:
    int longestSubsequence(string s, int k) {
       int len_k=log2(k)+1;
        int cnt=0;
        int num=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<len_k&&i<s.length();i++)
        {
            num+=((s[i]-'0')<<i);
            cnt++;
        }
        if(num>k)cnt--;
        for(int i=len_k;i<s.size();i++)
        {
            if(s[i]=='0')cnt++;
        }
        return cnt;
    }
};