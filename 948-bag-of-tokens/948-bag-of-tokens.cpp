class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n=tokens.size();
        int i=0,j=n-1;
        int s=0;
        int ans=0;
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                power-=tokens[i];
                s++;
                i++;
                ans=max(ans,s);
            }
            else if(s>0)
            {
                s--;
                power+=tokens[j];
                j--;
            }
            else
            {
                break;
            }
        }
        return ans;
    }  
    
};