class Solution {
public:
    int countOdds(int low, int high) {
       int x=0;
        for(int i=low;i<=high;i++)
        {
            if(i%2!=0)
                x++;
        }
        return x;
        
           /* if (high%2==0&&low%2==0)
            return (high-low)/2;
              else
          
         return (high-low)/2 +1;*/
            
    }
};