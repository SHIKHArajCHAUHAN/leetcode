class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
       vector<pair<int,int>>v;
        for(int i=0;i<values.size();i++)
        {
            v.push_back({values[i],labels[i]});
            
        }sort(v.begin(),v.end(),greater());
        map<int,int>mp;
        int count=0;
        int sum=0;
        for(auto i:v)
        {
          if(mp[i.second]<useLimit)
          { sum+=i.first;
           mp[i.second]++;
           count++;
           
        }if(count==numWanted) break;
            
        }
        return sum;
    }
};