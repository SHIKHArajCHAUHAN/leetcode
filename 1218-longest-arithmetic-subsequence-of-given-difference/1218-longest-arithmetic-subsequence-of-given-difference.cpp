class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
     // int maxx=0;
     //    int cnt=0;
     //    for(int i=1;i<arr.size();i++)
     //    {
     //       if(arr[i]-arr[i-1]==difference)
     //       {
     //           cnt++;
     //       }
     //        else
     //        {
     //            maxx=max(maxx,cnt);
     //            cnt=0;
     //        }
     //    }
        int ans =  1;
        unordered_map<int,int> mp;
        for(int &i:arr)
        {
            if(mp.find(i-difference)!=mp.end())
            {
                mp[i] = mp[i-difference] + 1;
                ans = max(ans,mp[i]);
            }
            else 
            {
                mp[i] = 1;
            }
        }
        return ans;
    }
};