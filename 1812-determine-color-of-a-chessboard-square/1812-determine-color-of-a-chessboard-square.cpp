class Solution {
public:
    bool squareIsWhite(string coordinates) {
        //a1(1,1)=2;a2=3;a3=4;b1=3;b2=4 even = blac//
        //even +odd =odd;
        if((coordinates[1]-'0')%2==0){
            if((coordinates[0]-'a'+1)%2==0)
            { return false;}
            return true;
        }
      if((coordinates[0]-'a'+1)%2==0)
      {
        return true;}
        return false;
    }
};