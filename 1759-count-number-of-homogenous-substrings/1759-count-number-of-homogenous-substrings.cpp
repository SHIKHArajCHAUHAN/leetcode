class Solution {
public:
    int countHomogenous(string s) {
      int i=0;
        int j=1;
        int count=1;
        int mod=1e9+7;
        int n=s.size();
        while (j<n){
            if (s[j]==s[j-1]){
                count=(count%mod+(j-i+1)%mod)%mod;
            }
            else{
                i=j;
                count=(count%mod+(j-i+1)%mod)%mod;
            }
            j+=1;
        }
    return count;   
    }
};