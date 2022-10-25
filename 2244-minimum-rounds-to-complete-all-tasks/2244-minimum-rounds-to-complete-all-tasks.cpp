class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>mp;
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
        }
        int cnt=0;
        for(auto i:mp)
        {
            if(i.second==1) return -1;
      
            if(i.second<=3)
                cnt+=1;
           else if(i.second%3==0)
                cnt+=(i.second/3);
            else
            {
                if(i.second%2==0)
                    cnt+=(i.second/3)+1;
                else
                     cnt+=(i.second/3)+1;       
            }
                
          }
    
        return cnt;
    }
};