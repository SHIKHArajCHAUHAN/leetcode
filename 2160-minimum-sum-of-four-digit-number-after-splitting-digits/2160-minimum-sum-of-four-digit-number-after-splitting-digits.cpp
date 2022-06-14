class Solution {
public:
    int minimumSum(int num) {
      /* vector<int>ans;
        int c=0;
        while(num!=0)
        {
            int r=num%10;
            ans.push_back(r);
             num=num/10;
            
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<4;i++)
        {
        
            int c=10*ans[0]+ans[3]+10*ans[1]+ans[2]; 
        }
        return c;*/
        int arr[4];
        for(int i=0;i<4;i++)
        {
            arr[i]=num%10;
            num=num/10;
        
        }
        sort(arr,arr+4);
        int c=(10*arr[0]+arr[3])+(10*arr[1]+arr[2]);
        
     return c;   
        
    }
};