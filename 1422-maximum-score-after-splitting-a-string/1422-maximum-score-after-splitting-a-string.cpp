class Solution {
public:
    int maxScore(string s) {
      int mxx=0;
    for (int i=0; i<s.length()-1; i++) 
    {
        int sum=0;
        for (int j=0; j<s.length(); j++)
            if(j<=i&&s[j]=='0'||j>i&&s[j]=='1')sum++;
        mxx=max(mxx,sum);
    }
    return mxx;  
    }
};