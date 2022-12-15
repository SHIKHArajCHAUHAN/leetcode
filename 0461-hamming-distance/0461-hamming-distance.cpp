class Solution {
public:
    int hammingDistance(int x, int y) {
       int xorr=x^y;
        int cnt=0;
        while(xorr!=0)
        {
            int rsbm=xorr&-xorr;
            xorr-=rsbm;
            cnt++;
        }
        return cnt;
    }
};