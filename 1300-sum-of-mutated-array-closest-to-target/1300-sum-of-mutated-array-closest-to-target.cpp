class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int n = arr.size();
        int low =0,high =0;
        for(int i=0;i<n;i++){
            high = max(high,arr[i]);
        }
        while(low<high){
            int mid = low+(high-low)/2;
            int sum =0;
            for(int i=0;i<n;i++){
                sum+=min(arr[i],mid);
            }

            if(sum>=target){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }

        int sum1 =0,sum2 =0;
        for(int i=0;i<n;i++){
            sum1 += min(arr[i],low);
            sum2 += min(arr[i],low-1);

        }
        return abs(sum2-target)<=abs(sum1-target)? low-1:low; 
    }
};