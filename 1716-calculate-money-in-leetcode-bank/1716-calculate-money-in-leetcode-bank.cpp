class Solution {
public:
    int totalMoney(int n) {
       // 1 2 3 4 5 6 7 //2 3 4 5 6 7 8 //3 4 5 6 7 8 9//n/7=()
       int x=n/7;
        int a=1;
        int res=0;
            for(int i=1;i<=(x+1);i++)
            {
                if(n>=7)
                {
                    int sum=(7*(2*a+(7-1)*1));
                    res+=sum/2;
                    n-=7;
                    a++;
                }
                else
                {
                 int sum=(n*(2*a+(n-1)*1));
                    res+=sum/2;

                    
                }
            }
        
         return res;
    }
};