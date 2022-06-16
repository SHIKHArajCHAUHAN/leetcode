class Solution {
public:
    int reverse(int x) {
        int sum=0;
        //int temp =x;
        while(x!=0)
        {
           int r=x%10;
          //  sum=sum*10+r;
            x=x/10;
            if(sum>INT_MAX/10||sum==INT_MAX/10&&r>7)return 0;
            
            if(sum<INT_MIN/10||sum==INT_MIN/10&&r<-8)return 0;
           sum=sum*10+r;
            
                
        }return sum;
    
        
    }
};