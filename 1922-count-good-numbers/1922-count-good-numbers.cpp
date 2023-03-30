class Solution {
public:
    int m=1000000007;
    long long power (long long x, long long y)
    {
        if(y==0) return 1;
        long long ans=power(x,y/2);
        ans*=ans;
        ans%=m;
        if(y%2) ans*=x;
        ans%=m;
        return ans;
    }
    int countGoodNumbers(long long n) {
        if(n<1) return 0;

    if(n%2==0)
        return (power(5,n/2)*power(4,n/2))%1000000007;
        else return (power(5,n/2+1)*power(4,n/2))%1000000007;
    }
};