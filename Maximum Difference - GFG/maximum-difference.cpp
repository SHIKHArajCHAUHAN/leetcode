//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
      //Your code here
      vector<int>right,left;
        stack<int>s;
       
        for(int i=n-1;i>=0;i--)
        {
           if(s.size()==0) right.push_back(0);
            else if(s.size()>0&&s.top()<A[i]) right.push_back(s.top());
            else if(s.size()>0&&s.top()>=A[i])
            {
                while(s.size()>0&&s.top()>=A[i]) s.pop();
                if(s.size()==0) right.push_back(0);
                else right.push_back(s.top());
            }
            s.push(A[i]);
        }
        reverse(right.begin(),right.end());
      
        stack<int>s1;
        
        for(int i=0;i<n;i++)
        {
           if(s1.size()==0) left.push_back(0);
            else if(s1.size()>0&&s1.top()<A[i]) left.push_back(s1.top());
            else if(s1.size()>0&&s1.top()>=A[i])
            {
                while(s1.size()>0&&s1.top()>=A[i]) s1.pop();
                if(s1.size()==0) left.push_back(0);
                else left.push_back(s1.top());
            }
            s1.push(A[i]);
        }
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,abs(left[i]-right[i]));
        }
        return maxx;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends