//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string ans;
     void fn(string str,int k,int size,int index){
        ans=max(ans,str);
        if(k==0||index==size) return ;
        for(int i=index+1;i<size;i++){
            if(str[i]>str[index]){
            swap(str[i],str[index]);

            fn(str,k-1,size,index+1);
            swap(str[i],str[index]); ///backtrack

            }
}
        fn(str,k,size,index+1); //backtrack kr rhe hai
    } 
    string findMaximumNum(string str, int k)
    {
       // code here.
          ans="";
      int size=str.size();
      fn(str,k,size,0);
      return ans;
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout<< ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}

// } Driver Code Ends