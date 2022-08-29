class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      /*  vector<int>ankit;
        for(int i=0;i<nums1.size();i++)
        {
            int j;
            for( j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                break;
                
            }
            int ans=-1;
            while(j<nums2.size())
            {
                if(nums2[j]>nums1[i])
                {
                    ans=nums2[j];
                   break;
                }
                j++;
                
            }
            ankit.push_back(ans);
            
        }
        return ankit;*/
        int n=nums1.size();
        int m =nums2.size();
        stack<int>s;
        map<int,int>mp;
        // mp[nums2[m-1]]=-1;
        
        for(int i =m-1;i>=0;i--)
        {
            while(!s.empty()&&s.top()<nums2[i])
            {
                s.pop();
            }
            if(s.empty()) mp[nums2[i]]=-1;
            else mp[nums2[i]]=s.top();
            s.push(nums2[i]);
        }
        vector<int> ans;
        for(auto x:nums1)
        {
            
            // cout << x.first << " " << x.second << endl;
            ans.push_back(mp[x]);
        }
        return ans;
    }
};