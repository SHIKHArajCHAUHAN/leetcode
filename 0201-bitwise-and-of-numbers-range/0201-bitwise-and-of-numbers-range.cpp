class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
     /* int band=left;
        for(int i=left+1;i<=right;i++)
        {
            band=band&i;
        }
        return band;*/
        int times=0;
        while(left!=right)
        {
            left>>=1;
            right>>=1;
            times++;
        }
return left<<=times;
    }
};