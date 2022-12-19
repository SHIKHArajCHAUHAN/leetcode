class Solution {
public:
    int minFlips(int a, int b, int c) {
        /*int x=a|b;
        int y=x^c;
        int cnt=0;
        while(y>0)
        {
            int rsb=y&-y;
            y-=rsb;
            cnt++;
        }
        return cnt;*/
           int cnt = 0;
    while(a || b || c){
        if(c & 1 && !(a & 1) && !(b & 1)) cnt++;//dono zero ho but c=1
        else if(!(c & 1) && (a & 1) && (b & 1)) cnt += 2;// dono 1 or c=0
        else if(!(c & 1) && ((a & 1) || (b & 1))) cnt += 1;//dono me se koe 1 and c=0
        a >>= 1 , b >>= 1, c >>= 1;//yha shit krte ja rhe hai
    }
        return cnt;
    }
};