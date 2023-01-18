class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int dis1=-1;
        int ans=INT_MAX;
        int n=words.size();
        vector<int>v;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            v.push_back(i);
        }
        if(v.size()==0) return -1;
        
        for(int i=0;i<v.size();i++)
        {
          int x=abs(v[i]-startIndex);
            int y=abs(abs(v[i]-startIndex)-n);
            ans=min(ans,min(x,y));
        }
        return ans;
    }
};