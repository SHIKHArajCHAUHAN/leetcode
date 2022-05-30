class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans1=1;
        int ans2=0;
        int f_ans;
     /*  int r=n%10;
        subtractProductAndSum(r);
        int ans=1;
        ans*=r;
       int res=0;
        res+=r;
        int x=ans-res;
        return x;*/
        while(n!=0){
            int r=n%10;
            
           ans1=ans1*r;
          ans2=ans2+r;
            
            n=n/10;
        }f_ans=ans1-ans2;
        return f_ans;
    }
};