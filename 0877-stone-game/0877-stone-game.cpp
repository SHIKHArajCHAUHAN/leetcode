class Solution {
public: int dp[500][500];
 int DP(bool turn,int i,int j,vector<int>&piles){
    int n=piles.size();
   if(i>j)return 0;
    if(j==i){
        return piles[j];
    }
    if(dp[i][j]!=-1) return dp[i][j];
     if(turn)
     {
         dp[i][j]=max(piles[i]+DP(!turn,i+1,j,piles),piles[j]+ DP(!turn,i,j-1,piles));
         
     }
     else dp[i][j]=min(-piles[i]+DP(!turn,i+1,j,piles),-piles[j]+ DP(!turn,i,j-1,piles));
return dp[i][j];
}

    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        memset(dp,-1,sizeof dp);
        int ans=0;
        return DP(1,0,n-1,piles)>0;
    }
};