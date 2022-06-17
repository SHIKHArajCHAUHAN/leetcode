class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        int x=0;
        while(n>1){
            x=n%4;
            if(x>0)
            {return false;}
             n=n/4;   
        }     
        return true;
         
       /* int x=0;
        int y;
        int res=false;
        while(res!=true){
         y=pow(4, x);
            if(y==n){return true;}
            if(y>n){
                 return res;}
                   x++;}
        return res;*/
    }
};