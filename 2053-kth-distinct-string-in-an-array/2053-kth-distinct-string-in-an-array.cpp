class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
      map<string,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        k=k-1;
        vector<string>v;
        for(string s : arr) {
            if(mp[s] == 1) {
                if(!k) return s;
                k--;
            } 
        }
        return "";
    }
};