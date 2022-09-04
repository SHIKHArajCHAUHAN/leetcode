class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      /*  vector<int>v;
        int n=nums.size();
        int maxx=INT_MIN;
        for(int i=0;i<k;i++)
        {
         maxx=max(maxx,nums[i]);
        }
        v.push_back(maxx);
        
        for(int i=k;i<n;i++)
        {if(nums[i]>maxx) maxx=nums[i];
        else if(nums[i-k]==maxx)
        {
            maxx=INT_MIN;
            for(int j=i-k+1;j<=i;j++){
                   maxx=max(maxx,nums[j]);
        }
            
        }
        v.push_back(maxx);
        }
        return v;*/
        // by aditya vema
         vector<int> v;
    list<int> l;
    
    int i=0, j=0;
    int n = nums.size();
    while(j<n)
    {
        while(l.size()>0 && l.back()<nums[j])
        {
            l.pop_back();
        }
        l.push_back(nums[j]);
        
        if(j-i+1<k)
            j++;
        
       else if(j-i+1 == k)
        {
            v.push_back(l.front());
            if(nums[i]==l.front())
                l.pop_front();
            i++;
            j++;
        }
        
    }
    return v;
    }
};