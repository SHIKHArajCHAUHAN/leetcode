//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    priority_queue<int>pq1;// y mid nikalega
    priority_queue<int,vector<int>,greater<int>>pq2;// y insertion k kaam ayga
    //Function to insert heap.
    void insertHeap(int &x)
    {
        pq1.push(x);
        pq2.push(pq1.top());pq1.pop();
        if(pq1.size()<pq2.size())
        {
            pq1.push(pq2.top());
            pq2.pop();
        }
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        
    }
    
    //Function to return Median.
    double getMedian()
    {
       double res;
       int n=pq1.size()+pq2.size();
       if(n&1==1)
       {
                res=pq1.top();
        }
        else {
            res=(pq1.top()+pq2.top());
            res=res/2.0;
        }
        return res;
       
    }
};


//{ Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}
// } Driver Code Ends