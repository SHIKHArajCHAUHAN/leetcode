class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
//        int maxx=0;
//         int cnt=0;
//         int l=0;
//         int r=0;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             if(nums[l]%2!=0||nums[i]>threshold)
//             {
//                l=i+1; cnt=0;
//             }
//             else if(nums[l]%2==0&&nums[i]<=threshold)
//             {
        
//                 if(nums[i]%2!=nums[i+1]%2)
//                 {
//                     cnt++;
//                 }
//                 else
//                 {
//                     if(nums[i+1]<=threshold)
//                     {
//                         //cnt++;
//                         maxx=max(maxx,cnt+1);
//                         cnt=0;
//                         l=i+1;i++;
//                     }
//                     else
//                     {
//                            maxx=max(maxx,cnt);
//                         cnt=0;
//                         l=i+1;i++;
                        
//                     }
                    
//                 }
//             }
//         }

//         maxx=max(maxx,cnt);
//         return maxx;
        
           int n = nums.size();
        int ans = 0;
        for(int i=0 ;i<n ;i++)
        {
            
            if(nums[i]%2==0 && nums[i]<= threshold)
            {
                int j = i+1 , k = i , cnt =1;
                while(j<n && nums[j]<=threshold)
                {
                    if(nums[k]%2 == nums[j]%2)
                        break;
                    k++;
                    j++;
                    cnt++;
                }
                ans = max(ans , cnt);
            }
            
        }
        
        return ans;
    }
};