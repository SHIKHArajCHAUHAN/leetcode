class Solution {
public:
    int countOrders(int n) {
    long  fact=1;
        for(int i=1;i<=n;i++)
        {

            fact=(fact*i)%1000000007;
            fact=(fact*(2*i-1))%1000000007;
        }
        return int(fact)%1000000007;
    }
};