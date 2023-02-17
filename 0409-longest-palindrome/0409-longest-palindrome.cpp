class Solution {
public:
    int longestPalindrome(string s) {
      map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int even=0,odd=0;
        for(auto x:mp)
        {
            if(x.second%2==0)even+=x.second;
            else {odd++;
                  even+=x.second-1;}
        }
        if(odd>=1) return even +1;
        else return even;
    }
};