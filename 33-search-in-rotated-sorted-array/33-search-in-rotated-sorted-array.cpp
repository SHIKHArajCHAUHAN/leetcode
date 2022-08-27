class Solution {
public:
  /*  int bs (vector<int>& nums, int target , int low, int high){ 
            while(low<=high){
                int mid = (low+high)/2;
                if(nums[mid] == target) return  mid;
                else if(target > nums[mid]) low = mid+1;
                else high = mid-1;
            }
        return -1;
    }*/
    int search(vector<int>& nums, int target) {
      /* int n=nums.size();
       /* int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target){ans=i;break;}
        }
        return ans; */
      /*  int res=-1;
        int s=0;
        int e=n-1;
        while(e>=s)
        {
            int mid=s+(e-s)/2;
            int next=mid+1;
            int prev=mid-1;
            if(nums[mid]<=nums[prev]&&nums[mid]==nums[next]) {res=mid;}
             if(nums[s]<=nums[mid]) s=mid+1;
            else if(nums[mid]<=nums[e]) e=mid-1;
    
        }
       int a= bs(nums,target,s,e);
       int b =bs(nums,target,0,res-1);
        return res;*/
           int l = 0, r = nums.size() - 1, mid;
        while(l <= r) {
            mid = l + (r - l)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] >= nums[l]) {
                if(target >= nums[l] && target <= nums[mid])
                    r = mid - 1;
                else l = mid + 1;
            } else {
                if(target >= nums[mid] && target <= nums[r])
                    l = mid + 1;
                else r = mid - 1;
            }
        }
        return - 1;        
    }
};
