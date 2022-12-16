class Solution {
public:
    int findComplement(int num) {
        /*   long long power = 1;
        int answer = 0;
        while(num > 0){
            if(num%2 == 0)
                answer += power;
            num = num/2;
            power *= 2;
        }
        return answer; /*/
        int ans=0;
        int i=0,bit=0;
        while(num!=0)
        {
            bit=num&1;
            if(bit==0)ans+=1<<i;
            if(bit==1) ans+=0<<i;
            i++;
            num>>=1;
        }return ans;
    }
};