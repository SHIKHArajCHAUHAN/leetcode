class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
//         int maxx=0;
//         for(int i=0;i<nums.size()-1;i++)
//         {int ramp=0;
//             int m=nums[i];
//             for(int j=i+1;j<nums.size();j++)
//             {
//               if(m<=nums[j])
//               {
    
//                   ramp=(j-i);
//               }
//             }
            
//         maxx=max(maxx,ramp);
//         }
//         return maxx;
      stack<int>st;
        st.push(0);
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i]<nums[st.top()])
            {
                st.push(i);
            }
        }
        int ans=0;
        for (int i=nums.size()-1;i>=0;i--)
        {
            while(!st.empty() && nums[st.top()]<=nums[i])
            {
                ans=max(ans,i-st.top());
                st.pop();
            }
        }
        return ans;   
        
    }
};