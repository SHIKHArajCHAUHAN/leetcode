class Solution {
public:
    int minOperations(int n) {
        // 1  3 5 7 9
        int sum=0;
        if(n%2==0)
        {
            for(int i=0;i<n/2;i++)
            {
               sum+=(2*i+1); 
            }
        }
        else
        {    
            for(int i=1;i<=n/2;i++)
            {
                sum+=2*i;
            }
            
        }
        return sum;
    }
};