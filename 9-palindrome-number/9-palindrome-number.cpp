class Solution {
public:
    bool isPalindrome(int x) {
    long long int rem,res=0;
        
     long long  int q=abs(x);
        
        while( q!=0){
          //  rem=q%10;
            res=res*10+q%10;
            q=q/10;
        }
         if(res==x)
            return true;
        else
                  return false;}
    
};