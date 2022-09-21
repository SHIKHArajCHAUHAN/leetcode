class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int n=arr.size();
        int j=0;
        //int sum=0;
        int total=0;
        while(2*j+1<=n){
            int k=2*j+1;
            int sum=0;
        for(int i=0;i<k;i++)
        {
          sum+=arr[i];  
        }
           total+=sum; 
            for(int i=k;i<n;i++)
            {
                sum+=arr[i]-arr[i-k];
            total+=sum;
            }
            j++;
        }
        return total;
      /* int n=arr.size();
        int arr2[n+1];
        arr2[0]=0;int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum+=arr[i-1];
            arr2[i]=sum;
        }
       int summ=0;
        for(int i=n;i>0;i--)
        {
            for(int j=i-1;j>=0;j-=2)
            {
              summ+=arr2[i]-arr2[j];  
            }
        }
        return summ ;*/
    }
};