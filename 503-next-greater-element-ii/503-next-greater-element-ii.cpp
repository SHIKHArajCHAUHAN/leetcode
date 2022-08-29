class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1;
        vector<int>v2;
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            nums.push_back(nums[i]);
        }
        for(int i=2*n-1;i>=0;i--)
        {
           if(s.size()==0) v2.push_back(-1);
            else if(s.size()>0&&s.top()>nums[i]) v2.push_back(s.top());
            else if(s.size()>0&&s.top()<=nums[i])
            {
                while(s.size()>0&&s.top()<=nums[i]) s.pop();
                if(s.size()==0) v2.push_back(-1);
                else v2.push_back(s.top());
            }
            s.push(nums[i]);
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<n;i++)
        {
            v1.push_back(v2[i]);
        }
    
        return v1;
        
        
        
        
        
        
        
        
        
     /* vector<int>left;
        vector<int>right;
        stack<int>s1,s2;
        for(int i=0;i<n;i++)
        {
            if(s1.size()==0) left.push_back(-1);
            else if(s1.size()>0 && s1.top()>nums[i]) left.push_back(s1.top());
            else if(s1.size()>0 && s1.top()<=nums[i])
            {
                while(s1.size()>0 && s1.top()<=nums[i]){s1.pop();}
                 if(s1.size()==0) left.push_back(-1);
                else left.push_back(s1.top());
            }
            s1.push(nums[i]);
        }
          for(int i=n-1;i>=0;i--)
        {
            if(s2.size()==0) right.push_back(-1);
            else if(s2.size()>0 && s2.top()>nums[i]) right.push_back(s2.top());
            else if(s2.size()>0 && s2.top()<=nums[i])
            {
                while(s2.size()>0 && s2.top()<=nums[i]){s2.pop();}
                 if(s2.size()==0) right.push_back(-1);
                else right.push_back(s2.top());
            }
            s2.push(nums[i]);
        }
        reverse(right.begin(),right.end());
        vector<int>v(n,-1);
        for(long long i=0;i<n;i++)
        {
            v[i]=max(right[i],left[i]);
        }
        return v;*/
        
    }
};