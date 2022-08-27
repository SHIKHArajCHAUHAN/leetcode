class Solution {
public:
   /* vector<int> targetIndices(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        int n=nums.size();
        int s=0;
        int e=n-1;
       // int mid=s+(e-s)/2;
        int res1=-1;
        int res2=-1;
        while(s<=e){
     int mid=s+(e-s)/2;
     if(target==nums[mid]){res1=mid;e=mid-1;}
            else if(target<mid) e=mid-1;
            else s=mid+1;
        }  
          while(s<=e){
     int mid=s+(e-s)/2;
     if(target==nums[mid]){res2=mid;s=mid+1;}
            else if(target<mid) e=mid-1;
            else s=mid+1;
        }         vector<int>v;

         if(res1==-1) return {-1};
       else if(res1==res2) return {res1};
else{
        for(int i=res1;i<=res2;i++)
        {
            v.push_back(i);
        }return v;
}
    
    }
};*/
       int firstOccurence(vector<int>& nums, int target){
        int start = 0;
        int res = -1;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(target==nums[mid]){
                res = mid;
                end = mid-1;
            }
            else if(target<nums[mid])
                end = mid-1;
            else 
                start = mid+1;
        }
        return res;
    }
    int lastOccurence(vector<int>& nums, int target){
        int start = 0;
        int res = -1;
        int end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(target==nums[mid]){
                res = mid;
                start = mid+1;
            }
            else if(target<nums[mid])
                end = mid-1;
            else 
                start = mid+1;
        }
        return res;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        int first = firstOccurence(nums, target);
        int last = lastOccurence(nums, target);
        
        if(first!=-1 && last!=-1){
        for(int i=first; i<=last; i++)
            result.push_back(i);}
        return result;
    }
};