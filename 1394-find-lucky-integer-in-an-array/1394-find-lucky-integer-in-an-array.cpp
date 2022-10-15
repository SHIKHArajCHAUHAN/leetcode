class Solution {
public:
    int findLucky(vector<int>& arr) {
       map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        int maxx=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==mp[arr[i]]) 
               maxx=max( arr[i],maxx);
        }
        return maxx;
    }
};