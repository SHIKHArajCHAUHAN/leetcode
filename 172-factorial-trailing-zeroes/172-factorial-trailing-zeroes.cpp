class Solution {
public:
    int trailingZeroes(int n) {
        int res=0;
       // for(int i=5;i<=n;i++)
        while(n)
        {
            
            res=res+n/5;
            n=n/5;
        }
        return res;
        
    }
};