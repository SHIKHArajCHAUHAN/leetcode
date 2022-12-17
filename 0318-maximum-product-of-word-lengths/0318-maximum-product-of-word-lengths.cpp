class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            int bitmask=0;
            string ihtword=words[i];
            for(auto j:ihtword)
            {
                int pos=j-'a';
                int mask=(1<<pos);
                bitmask=bitmask|mask;
                
            }
            v[i]=bitmask;
        }
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if((v[i]&v[j])==0)
                { int res=words[i].size()*words[j].size();
                ans=max(ans,res);
                }
            }
        }
        return ans;
    }
};