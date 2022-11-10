class Solution {
public:
    int fn(int n,int k)
    {
        int x,sum=0;
        while(n)
        {
            int r=n%10;
             x=r;
            sum+=r;
        }
        if(x==k) return sum;
        else return -1;
        
    }
    int minimumNumbers(int num, int k) {
        if(num==0) return 0;
	
	int i; bool flag=0;
    for(i=1;i<=3000;++i)
    {
        if((k*i)%10==num%10 || k*i==num ){flag=1; break;}
    }
   
    if(flag==1 && (num-k*i)>=0) return i;
    else return -1;
    }
};