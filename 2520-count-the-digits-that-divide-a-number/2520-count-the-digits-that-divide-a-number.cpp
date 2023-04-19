class Solution {
public:
    int countDigits(int num) {
      int cnt=0;
        int n=num;
        while(n)
        {
            int r=n%10;
            n/=10;
            if(num%r==0) cnt++;
        }
        return cnt;
    }
};