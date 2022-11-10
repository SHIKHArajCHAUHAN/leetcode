class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
      
        long long cnt=0;
        int k=total/cost1;
        
        for(int i=0;i<=k;i++)
        {
            int x=total;
            x=x-i*cost1;
            
            cnt=cnt+x/cost2 +1;
            
        }
        return cnt;
  
    }
};