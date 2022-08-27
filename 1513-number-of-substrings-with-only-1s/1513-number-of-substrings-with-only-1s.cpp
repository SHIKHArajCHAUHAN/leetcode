#define m 1000000007
class Solution {
    
public:
    int numSub(string s) {
      long long c=0;
        int n=s.length();
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') c++;
            if(s[i]=='0'){   
                sum=(sum+((c*(c+1))/2)%m)%m;
                       c=0;}
            
        } 
       // sum+=(c*(c+1))/2;
        sum=(sum+((c*(c+1))/2)%m)%m;
        return sum;
    }
};