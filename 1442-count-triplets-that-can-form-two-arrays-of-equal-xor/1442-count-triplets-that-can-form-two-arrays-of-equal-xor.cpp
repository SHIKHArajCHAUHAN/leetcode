class Solution {
public:
    int countTriplets(vector<int>& arr) {
       int n=arr.size();
        int count=0;
        vector<int>res(n+1,0);
       for(int i=0;i<n;i++)
        {
            res[i+1]=arr[i]^res[i];
        }
        for(int i=1;i<=n;i++)

        {
          for(int j=i+1;j<=n;j++)
          {
              for(int k=j;k<=n;k++)
              {
                  if(res[j-1]^res[i-1]==res[k]^res[j-1])
                  count++;    
              }
          }
        }
        return count;
    }
};