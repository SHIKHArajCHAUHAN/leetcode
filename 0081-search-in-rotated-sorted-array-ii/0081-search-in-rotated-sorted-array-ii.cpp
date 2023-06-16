class Solution {
public:
    bool search(vector<int>& nums, int target) {
//         int s=0,e=nums.size()-1;
//         while(s<=e)
            
//         {
//             int mid=(s-e)/2;
//             if(nums[mid]==target)return true;
//             if(nums[s]<=nums[mid])
//             {
//                 if(nums[s]<=target&&nums[mid]>=target)
//                 {
//                     e=mid-1;
                    
//                 }
//                 else s=mid+1;
//             }
//             else
//             {
//               if(nums[e]>=target&&nums[mid]<=target)
//                 {
//                      s=mid+1;
                    
//                 }
//                 else e=mid-1;  
//             }
//         }
    //    return false;
//    int low = 0, high = nums.size() - 1; 

//   while (low <= high) {
//   int mid = low + (high-low) / 2;
//     if (nums[mid] == target)
//       return true;

//     if (nums[low] <= nums[mid]){ 
//       if (nums[low] <= target && nums[mid] > target)
//         high = mid - 1; 
//       else
//         low = mid + 1;
//     } else { 
//       if (nums[mid] < target && target <= nums[high])
//         low = mid + 1;
//       else
//         high = mid - 1;
//     }
//   }
//   return false;  
        int l = 0;
        int r = nums.size() - 1;
        
        while(l <= r)
        {
            int mid = l + (r-l) / 2;
            if (nums[mid] == target)return true;
            if((nums[l] == nums[mid]) && (nums[r] == nums[mid]))
            {
                l++;
                r--;
            }
            else if(nums[l] <= nums[mid])
            {

                if((nums[l] <= target) && (nums[mid] > target))
                    r = mid - 1;
                else
                    l = mid + 1;
            }

            else
            {
                if((nums[mid] < target) && (nums[r]>= target))
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return false;
    }
};