class Solution {
public:
    int climbStairs(int n) {
     /*   {
            return climbStairs(0,n)
        }
        int climbStairs(int i,int n)
            if(i>n)return 0;
            if(i==n)return 1;
            return climbStairs(i+1,n)+climbStairs(i+2,n)
        }*/
       /* if(n<2) return 1;
        else
            return climbStairs(n-1)+climbStairs(n-2);*/
        if(n==1){return 1;}
        int first=1,sec=2;
        for(int i=3;i<=n;i++){
            int third=first+sec;
            first=sec;
            sec=third;
        }return sec;
        
        
    }
};