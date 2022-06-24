class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles;
        int y=0;
        while(numBottles>=numExchange)
        {
        int x=numBottles/numExchange;
           int y=numBottles%numExchange;
           // x=x+y;
          res+=x;  
        numBottles=x+y;

            
        }
        return res;
    }
};