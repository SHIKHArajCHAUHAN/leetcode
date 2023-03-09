class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
       int n=arr.size();
        int ans=0;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
          mp[(k + arr[i] % k) % k]++;
           
       }
       for(int i=0;i<arr.size();i++){
           int rem=arr[i]%k;
           if(rem==0){
              if(mp[rem]%2!=0) return false;
           }
           
          else{
              int rem2=k-rem;
              if(mp[rem]!=mp[rem2])  return false;
           }
       }
        return true;
    }
};