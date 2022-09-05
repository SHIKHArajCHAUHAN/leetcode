class Solution {
public:
    int getSum(int a, int b) {
     /*   while(b!=0){
            a++;b--;
        }
    /*while(b!=0){
          a--;b++ ; 
        }*/
       /* return a;*/
            int x=a^b;
      /*  int carry=a&b;
      // x=x^carry;
      //  carry=x&carry;
        if(carry==0)return x;
        else return getSum(x,carry<<1);*/
        int arr[2]={a,b};
        return accumulate(arr,arr+2,0);
        
    }
};