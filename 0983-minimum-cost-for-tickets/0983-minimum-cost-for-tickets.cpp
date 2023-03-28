class Solution {
public:
    int fn(vector<int>&days,vector<int>&costs,int n,int index,vector<int>&dp)
    {
        if(index>=n)return 0;
        if(dp[index]!=-1) return dp[index];
        int opt1=costs[0]+fn(days,costs,n,index+1,dp);
        int i;
        for( i=index;i<n&&days[i]<days[index]+7;i++);
             int opt2=costs[1]+fn(days,costs,n,i,dp);
         for(i=index;i<n&&days[i]<days[index]+30;i++);
             int opt3=costs[2]+fn(days,costs,n,i,dp);
        dp[index]= min(opt1,min(opt2,opt3));
        return dp[index];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
       
        int n=days.size();
        vector<int>dp(n+1,-1);
       return fn(days,costs,n,0,dp);
    }
};