class Solution {
public:
    int binaryGap(int n) {
        vector<int>v,v2;
       while(n>0)
       {
           int r=n%2;
           n/=2;
           v.push_back(r);
       }
        /*int pos=-1;
        int pos2=-1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1) 
            {pos=i;break;}
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==1) 
            {pos2=i;
             break;}
        }
        if(pos==pos2) return 0;
        else return abs(pos-pos2)-1;*/
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1) v2.push_back(i);
        }
        int ans=INT_MIN;
        for(int i=1;i<v2.size();i++)
        {
            ans=max(ans,v2[i]-v2[i-1]);
        }
        if(ans==INT_MIN) return 0;
        else return ans;
        
    }
};