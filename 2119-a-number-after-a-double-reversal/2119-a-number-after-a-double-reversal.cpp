class Solution {
public:
    int fn(int num)
    {
    int  rem=0;
        while(num)
        {
          rem=rem*10+num%10;
            num/=10;
            
        }
        return rem;
    }
    bool isSameAfterReversals(int num) {
        int n=fn(num);
        int n2=fn(n);
       /* int rev=0;
        for(int i=0;i<32;i++)
        {
             int lb=(n&1);
           rev<<=1;
            rev=rev|lb;
            n>>=1;
            
        }*/
       /*  int rev2=0;
        for(int i=0;i<32;i++)
        {
             int lb=(num&1);
           rev2<<=1;
            rev=rev|lb;
            num>>=1;
            
        }*/
        if(n2==num) return  true;
        else return false;
        
    }
};