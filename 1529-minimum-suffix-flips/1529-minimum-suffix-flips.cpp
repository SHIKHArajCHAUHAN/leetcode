class Solution {
public:
    int minFlips(string target) {
      int n=target.length();
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(target[i]!=target[i+1])cnt++;
        }
        if(target[0]=='1') return cnt+1;
        return cnt;
    }
};