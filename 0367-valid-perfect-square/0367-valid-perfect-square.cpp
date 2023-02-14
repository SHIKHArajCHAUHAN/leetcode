class Solution {
public:
    bool isPerfectSquare(int num) {
     /* for(int i=1;i*i<=num;i++){
          if(i*i==num)
              return true;   
      }  
        return false;*/
      long  int high=1000000;
         long   int mid,sq,low=1;
    while(low<=high){
        mid=low+(high-low)/2;
        sq=mid*mid;
        if(sq==num) return true;
       else if(sq>num) high=mid-1;
        else low=mid+1;  
        }
        return false;
    }
};