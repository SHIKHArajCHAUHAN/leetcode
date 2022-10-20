class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int>mp;
       for(int i=lowLimit;i<=highLimit;i++)
       {
           int sum=0;
           int rem=0;
           int n=i;
           while(n!=0)
           {
                rem=n%10;
                n=n/10;
               sum+=rem;
                 // mp[sum]++;
           }
          mp[sum]++;
       }
        int maxx=INT_MIN;
        for(auto i:mp)
        {
            maxx=max(maxx,i.second);
        }
        return maxx;
    }
};