class Solution {
public:
    bool isPowerOfThree(int n) {
        int x=0;
        if(n<=0){ return false;}
        
       while(n>1){
             x=n%3;
            if(x>0){return false;
                   }
            n=n/3;
            }
        return true;}
        
        
        
    
};