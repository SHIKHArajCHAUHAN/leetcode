class Solution {
public:
    int sumBase(int n, int k) {
        int x=0;
        while(n>0){
        int y=n%k;
           x+=y;
            n/=k;
            
        }
            return x;
    }
};