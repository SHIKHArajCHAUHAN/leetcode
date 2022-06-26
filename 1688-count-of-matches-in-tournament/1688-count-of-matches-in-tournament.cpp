class Solution {
public:
    int numberOfMatches(int n) {
        int count=0;
       while(n!=1)
       {
          if(n%2==0)
          {
             n/=2; 
              count+=n;
          } else
          {
              count+=n/2;
              n=n/2+1;
             
          }
       }
        return count;
    }
};