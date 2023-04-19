class Solution {
public:
    int pivotInteger(int n) {
       int n1=((n+1)*n)/2;
        if(n==1) return 1;
        int sum=0;
        while(n)
        {
          sum+=n;
            n--;
            if(n1-sum==sum+n) return n;
        }
        return -1;
    }
};