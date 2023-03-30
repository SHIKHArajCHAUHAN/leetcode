class Solution {
public:
    int countDigitOne(int n) {

       //  ios_base::sync_with_stdio(false);
       //  cin.tie(NULL);
       // //use stl and count fun
       //  int countt=0;
       //  for(int i=1;i<=n;i++)
       //  {
       //      string s=to_string(i);
       //      countt+=count(s.begin(),s.end(),'1');
       //  }
       //  return countt;
        // if(n<0) return 0;
        // if(n==1) return 1;
        // int digit=0;
        // while(n)
        // {
        //     n/=10;
        //     digit++;
        // }
        // return digit*pow(10,digit-1);
          int count = 0;
        for (long long i = 1; i <= n; i *= 10) {
            long long div = i * 10;
            count += (n / div) * i + min(max(n % div - i + 1, 0LL), i);
        }
        return count;
        
    }
};

 /*
 
 dp[1] = 1
 dp[2] = dp[1] + 19
 dp[3] = dp[2] + 
 
 10 11 12 13 14 15 16 17 18 19 21 31 41 51 61 71 81 91 
 101 102 103 104 105 106 ..........109 111...119 211...219 311..319
 */
//one digit have only one one eception
//2 digit have 20 total one 
//3 digit 300
//4 digit have 4000
//and so on ....