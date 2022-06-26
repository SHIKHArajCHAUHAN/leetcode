class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<colors.size();i++)
        {
            if(st.empty())
            { st.push(i);
            }
            else{
                if(colors[st.top()]==colors[i])
                {
                    ans+=min(neededTime[st.top()],neededTime[i]);
                    if(neededTime[st.top()]<neededTime[i])
                    {
                        st.pop();
                        st.push(i);
                    }
                }
                else
                { st.push(i);}
            }
            
        }
        return ans;
    }
};