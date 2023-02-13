class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int s=0;
        int n=arr.size();
        int e=n-1;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]) s=mid+1;
            else e=mid;
         mid=s+(e-s)/2;
 
        }return s;
    }
};