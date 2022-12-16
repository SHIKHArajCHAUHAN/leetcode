class Solution {
public:
    int fn(int n)
    {
        int cnt=0;
        while(n!=0)
        {
            int rsbm=n&-n;
            n-=rsbm;
            cnt++;
        }
        return cnt;
    }
    
    int minimizeXor(int num1, int num2) {
       int k= fn(num2);
       /* vector<int>v;
        for(int i=0;i<=num2;i++)
        {
            int y=fn(i);
            if(y==x) 
            {
              v.push_back(i);  
            }
        }
        sort(v.begin(),v.end());
        return v[0];*/
         int ans=num1;
        int bits[32]={0};//sare bit ko0 mapped kr lia
        int i;
        for(i=31;i>=0;i--)
        {
            int bit=num1>>i & 1;
            if(bit ==1)
              {  ans|=1<<i;bits[i]=1; k--;}
            if(k==0)
                break;
        }
        if(k==0)
        {
            int p = ans>>i;  
            ans = p<<i;
            return ans;
        }
        for(int j=0;j<=31;j++)
        {
            if(bits[j]==0)
            {
                ans|=1<<j;    
                k--;
            }
            if(k==0)
                break;
        }
        return ans;
        
    }
};