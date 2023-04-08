//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int findK(int [MAX][MAX],int ,int ,int );
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends


/*You are required to complete this method*/
int findK(int A[MAX][MAX], int n, int m, int k)
{
//Your code here
   
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        int dir = 0;
        vector<int> ans;
        int top = 0, bottom = n-1;
        int left = 0, right = m-1;
        while(left<=right && top<=bottom)
        {
            if(dir == 0)
            {
                for(int i=left; i<=right; i++)
                    ans.push_back(A[top][i]);
                top++;
            }
            if(dir==1)
            {
                for(int i=top; i<=bottom; i++)
                    ans.push_back(A[i][right]);
                right--;
            }
            if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(A[bottom][i]);
                    
                }
                bottom--;
            }
            if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(A[i][left]);
                    
                }
                left++;
            }
           
            dir = (dir+1)%4;
        }
        return ans[k-1];
}

