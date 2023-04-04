class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        map<int,int>mp;
    long long  i=0,j=0;
        long long maxx=0;
        long long sum=0;
//         while(j<nums.size())
//         {
        
//                 mp[nums[j]]++;
//                 sum+=nums[j];j++;
//              if(mp.find(nums[j])==mp.end()&&mp.size()>=k)
//             {
//                 maxx=max(maxx,sum);
//                mp.erase(nums[i]);
//                 sum-=nums[i];i++;
//                 sum+=nums[j];
//                  maxx=max(maxx,sum);
//             }
//             else if(mp.find(nums[j])!=mp.end())
//             {
//                 maxx=max(maxx,sum);
//                 mp.clear();
//                 mp[nums[j]]++;
//                 sum=nums[j];
//             }
//             j++;
               
//         }
//      //   maxx=max(maxx,sum);
//         return maxx;
        while(j<nums.size())
      {
        sum += nums[j] ;
        mp[nums[j]]++ ;
        if(j-i+1<k)
        {
         j++ ;
        }
        else if(j-i+1==k)
        {
         if(mp.size()==k)
         {
          maxx=max(maxx,sum) ;
         }
         if(mp.find(nums[i])!=mp.end())
         {
           mp[nums[i]]-- ;  
         }
         if(mp[nums[i]]==0) mp.erase(nums[i]) ;
         sum -=nums[i] ;
         i++ ;
         j++ ; 
        }

      }
      return maxx ; 
    }
};