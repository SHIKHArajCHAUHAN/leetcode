class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        stack<int>s;
        int ans=0;
        for(int i=0;i<colors.size();i++)
        {
            if(s.empty()){
                s.push(i);
            }
            else
            {
                if(colors[s.top()]==colors[i])
                { 
                    ans+=min(neededTime[s.top()],neededTime[i]);
                    if(neededTime[s.top()]<neededTime[i])
                    {
                       s.pop();
                        s.push(i);
                    } 
                 }
                else
                {
                    s.push(i);
                }
            }
            
        }
        return ans;
    }
};