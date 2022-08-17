class Solution {
public:
    int FfindKthBit(int n, int k) {
       //length=2 ki power level -1
        if(n==1&&k==1) return 0;
        int mid=(pow(2,n)-1)/2;
        if(k==mid+1) return 1;
        else if(k<=mid) {return FfindKthBit(n-1,k);}
        else {return !FfindKthBit(n-1,pow(2,n)-k);}
        
        
    }
        char findKthBit(int n, int k) {
            if(FfindKthBit(n,k)) return '1';
            else return '0';}
};