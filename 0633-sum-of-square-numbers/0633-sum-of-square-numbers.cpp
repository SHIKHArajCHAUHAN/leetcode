class Solution {
public:
    bool judgeSquareSum(int c) {
       for(long i=0;i*i<=c;i++)
       {
          double x=sqrt(c-i*i);
           if(int(x)==x) return true;
       }
        return false;
    }
};