class Solution {
public:
    int bitwiseComplement(int n) {
         int mask = 0;
        int m = n;

        if(n == 0){
            return 1;
        }
        while(m){
            mask = ((mask<<1)|1);//
            m = m>>1;
        }
        n = ~n;
        int ans = (n&mask);
        return ans; 
    }
};