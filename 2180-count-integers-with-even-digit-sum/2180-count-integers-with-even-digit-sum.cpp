class Solution {
public:
    int fn(int n)
    {
        int sum=0;
        while(n)
        {
          int r=n%10;
            sum+=r;
            n/=10;
        }
        return sum;
    }
    int countEven(int num) {
        int cnt=0;
       for(int i=1;i<=num;i++)
       {
           int sum=fn(i);
           if(sum%2==0) cnt++;
       }
        return cnt;
    }
};