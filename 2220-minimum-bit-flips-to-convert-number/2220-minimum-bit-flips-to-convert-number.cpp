class Solution {
public:
    int minBitFlips(int start, int goal) {
     // get bit and xor cnt 1 and result;
       int x=start^goal;
        int cnt=0;
           while(x)
           {
              x=x&(x-1);
               cnt++;
           }
        return cnt; 
    }
};