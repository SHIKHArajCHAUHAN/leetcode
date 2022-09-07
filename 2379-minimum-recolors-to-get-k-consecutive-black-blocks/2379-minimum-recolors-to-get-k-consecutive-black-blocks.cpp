class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int W=0;
        int B=0;
        for (int i=0;i<k;++i)
        {
            if(blocks[i]=='B') ++B;
            else ++W;
        }
        int c=0;
        int ans=W;
        for (int i=1;i<blocks.size()-k+1;++i){
            if(blocks[i+k-1]=='B') ++B;
            else ++W;
            
            if(blocks[c]=='B')--B;
            else --W;
            ++c;
            ans=min(ans,W);
        }
        return ans; 
    }
};