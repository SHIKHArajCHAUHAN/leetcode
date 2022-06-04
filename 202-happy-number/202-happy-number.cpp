class Solution {
private:
    int Happy(int n) {
        int r,sum=0;
     while(n>0) {r=n%10;
                 sum=sum+r*r;
                 n=n/10;}
                 return sum;
      }
public:      
        bool isHappy(int n){
        while(n!=1 && n!=4) {n=Happy(n);}
        if(n==1)
        return true;
        else return false;
    }
};