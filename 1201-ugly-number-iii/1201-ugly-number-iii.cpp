class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
             int low=1, high = 2e9;
        long a1=long(a), b1=long(b), c1=long(c);
        long ab=a1*b1/__gcd(a1,b1);
        long bc=b1*c1/__gcd(b1,c1);
        long ac=a1*c1/__gcd(a1,c1);
        long abc=a1*bc/__gcd(a1,bc);
        while(low<high)
        {
            int mid=low+(high-low)/2;
            int cnt=mid/a1+mid/b1+mid/c1-mid/ab-mid/bc-mid/ac+mid/abc;
            if(cnt<n)
            {
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return low;
    }
};