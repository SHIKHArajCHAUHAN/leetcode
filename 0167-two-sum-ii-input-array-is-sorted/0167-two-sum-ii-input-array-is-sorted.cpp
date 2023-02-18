class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n=numbers.size();
        for(int i=0;i<n;i++){
        int s=i+1;
        int e=n-1;
          int t=target-numbers[i];  
        while(s<=e)
        {
           int mid=s+(e-s)/2;
            if (numbers[mid]==t) return{i+1,mid+1};
            if(numbers[mid]>t) e=mid-1;
            else s=mid+1;  
        }
        }  return {-1,-1};
    }
};