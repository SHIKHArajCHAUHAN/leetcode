class Solution {
public:
    bool isPowerOfTwo(int n) {
     /*   int x;
      while(x>=0&& x<=n){
           if(n==pow(2,x))
               return true;}
        return false;*/ 
        return n>0&& (n& n-1)==0;
    }
};