class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev=0;
        for(int i=0;i<32;i++)
        {
             uint32_t lb=(n&1);
           rev<<=1;
            rev=rev|lb;
            n>>=1;
            
        }
        return rev;
    }
};