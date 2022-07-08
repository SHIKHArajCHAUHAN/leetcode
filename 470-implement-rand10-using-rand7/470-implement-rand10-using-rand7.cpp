// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int sum_ran=0;
      // 7*7=49+1=%10 ///// 7+1,+2+3=max 10 7+7
       for(int i=1;i<=7;i++)
       {
         sum_ran+=rand7();  
       }
        return sum_ran%10+1; //+1 in case 9+1=10
        
    }
};