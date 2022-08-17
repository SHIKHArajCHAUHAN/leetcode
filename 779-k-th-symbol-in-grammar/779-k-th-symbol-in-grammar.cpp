class Solution {
public:
    int kthGrammar(int n, int k) {
     // subsequent number are prev+rev of prev
        int len=pow(2,n-1);
        if(n==1&& k==1) return 0;
        int mid=len/2;
       // if(k==mid) return 1;
        if(k<=mid) return kthGrammar(n-1,k);
        else return  !kthGrammar(n-1,k-len/2);
        
    }
};