class Solution {
public:
    vector<int> constructArray(int n, int k) {
        int r=n,l=1,i=0;
        vector<int>res(n);
        while(l<=r)
        {
            if(k>1)
            {
              res[i++]=k--%2!=0?l++:r--;  
            }
            else
            {
                res[i++]=l++;
            }
        }
        return res;
    }
};