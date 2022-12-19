class Solution {
public:
    bool validUtf8(vector<int>& data) {
     /* int rb=0;
        for(auto i:data)
        {
            if(rb==0)
            {
                if((i>>7)==0b0)rb=0;
               else if((i>>5)==0b110)rb=1;
                else if((i>>4)==0b1110) rb=2;
                else if((i>>3)==0b11110) rb=3;
            }
            else
            {
                if((i>>6)==0b10)rb--;
                else return false;
            }
        }
        return rb==0;*/
         int count = 0;
        for(auto num : data) {
           if(count == 0) {
               if( num >> 5 == 0b110) count  = 1;
               else if( num >> 4 == 0b1110) count  = 2;
               else if( num >> 3 == 0b11110) count  = 3;
               else if( num >> 7 ) return false;
           }
            else {
                --count;
                if( num >> 6 != 0b10)  return false;
            }
        }
        return count == 0;
    }
};