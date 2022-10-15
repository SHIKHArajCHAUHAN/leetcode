class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr2.size();
        map<int,int>count;
        for(int i=0;i<arr1.size();i++)
        {
            count[arr1[i]]++;
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(count.find(arr2[i])!=count.end())
            {
                while(count[arr2[i]]--)
                
                        v.push_back(arr2[i]);
            }count.erase(arr2[i]);
        }
        for(auto i:count)
        {
            if(i.second>0)
                    {
                    while(i.second--)
                    {
            v.push_back(i.first);
                    }
        }
        }
        return v;
    }
};