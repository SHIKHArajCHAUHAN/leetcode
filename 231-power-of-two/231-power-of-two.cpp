class Solution {
public:
    bool isPowerOfTwo(int n) {
     /*   int x;
      while(x>=0&& x<=n){
           if(n==pow(2,x))
               return true;}
        return false;*/ 
     /*  // return n>0&& (n& n-1)==0;
        long long r=1;
        while(r<n){
            r*=2;}
        return r==n;*/
       if(n==1) return true;
        if(n==0) return false;
        int r=n%2;
        if(r!=0) return false;
            return isPowerOfTwo(n/2);
        
    
        
    }
};