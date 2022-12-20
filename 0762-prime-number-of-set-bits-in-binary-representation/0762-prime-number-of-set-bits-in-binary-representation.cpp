class Solution {
public:
    int fn1(int n)
    {
        int cnt=0;
        while(n)
        {
            int rsbm=n&-n;
            n-=rsbm;
            cnt++;
        }
        return cnt;
    }
    bool isPrime(int n)
{
    if (n <= 1)
        return false;
 

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
       for(int i=left;i<=right;i++)
       {
          if(isPrime(fn1(i))) cnt++;
       }
             return cnt;
    }
};