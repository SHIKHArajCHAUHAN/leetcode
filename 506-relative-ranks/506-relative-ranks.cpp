class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
     priority_queue<pair<int,int>>pq;
        int n=score.size();
        vector<string>s(n,"-1");
        
        for(int i=0;i<score.size();i++)
        {
          pq.push({score[i],i}); 
        }
       /* for(int i=0;i<v.size();i++)
        {
            auto res=find(v.begin(),v.end(),score[i]);
            if(res!=v.end())
            {
                int index=res-v.begin();
                s.push_back(to_string(index+1));
            }
        }*/
        
        int i=0;
        while(!pq.empty())
        {
            int index=pq.top().second;
            pq.pop();
            if(i==0) s[index]="Gold Medal";
            else if(i==1) s[index]="Silver Medal";
            else if(i==2) s[index]="Bronze Medal";
            else s[index]=to_string(i+1);
          i++;  
        }
        return s;
    }
};