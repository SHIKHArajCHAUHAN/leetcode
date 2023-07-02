class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        // int count=0;
        // int z;
        // for(int i=0;i<=arr.size();i++)
        // {if(arr[i]%2!=0){count++;}
        //     z+=arr[i];
        //     for(int j=i;j<arr.size();j++)
        //     {
        //         if( (arr[i]+arr[j])%2!=0&&i!=j)
        //         {
        //            count++; 
        //         }
        //     }
        // }if(z%2!=0)
        //     count++;
        // return count;
          int m=1e9+7;
         int c=0;
        int s=0,ev=1,od=0;//sumzero mtlb even h esi liy evencoun ko 1 se iniialise kiya h
        for(int x:arr){
            s+=x;
            if(s&1){
                c=(c+ev)%m;
                od++;
            }else{
                c=(c+od)%m;
                ev++;
            }
        }
        return c;
    }
};