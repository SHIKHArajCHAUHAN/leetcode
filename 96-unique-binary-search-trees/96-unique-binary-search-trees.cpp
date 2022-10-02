class Solution {
public:
   /* int numTrees(int n) {
      if(n<=1) {return 1;}
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=numTrees(i)*numTrees(n-i-1);
        }
        return res;*/
    
       long long int catalan(long int n,vector<long long int>& v) 
    { 
       
        if (n <= 1) return 1; 
        if(v[n]!=-1)return v[n];

        long long int ans = 0; 
        for (int i=0; i<n; i++) 
            ans += catalan(i,v)*catalan(n-i-1,v); 
    v[n]=ans;
        return ans; 
    } 
    int numTrees(int n) {
        vector<long long int> v(n+1,-1);
        return catalan(n,v); 
    }
};