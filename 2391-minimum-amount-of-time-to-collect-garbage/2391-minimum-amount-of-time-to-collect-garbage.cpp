class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       int n = travel.size();
        int metal =0;
        int paper =0;
        int glass =0;
        int G =0,P=0,M=0;
        vector<int> prefix(n,0);
        prefix[0] = travel[0];
        for(int i=1;i<n;i++)
        {
            prefix[i] =prefix[i-1] + travel[i];
        }
        for(int i=0;i<garbage.size();i++)
        {
            for(int j=0;j<garbage[i].length();j++)
            {
                if(garbage[i][j]=='M')
                {
                    metal++;
                
                    M = i;
                }
                if(garbage[i][j]=='P')
                {
                    paper++;
                    P = i;
                }
                if(garbage[i][j]=='G')
                {
                    glass++;
                    G =i;
                }
            }
        }
        if(M>0)    metal += prefix[M-1];
        
        if(G>0)    glass += prefix[G-1];

        if(P>0)     paper += prefix[P-1];
        return metal + glass + paper;  
    }
};