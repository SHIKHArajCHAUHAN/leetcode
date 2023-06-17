//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class Solution
{

    
    private:
    void heapify(vector<int> &ans,int n,int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if(left<n && ans[left]>ans[largest]){
            largest=left;
        }
        if(right<n && ans[right]>ans[largest]){
            largest=right;
        }
        
        if(largest!=i){
            swap(ans[largest],ans[i]);
            heapify(ans,n,largest);
        }
    }
    
    void buildHeap(vector<int> &ans,int n){
        for(int i=(n/2-1);i>=0;i--){
            heapify(ans,n,i);
        }
    }
    
    void heapSort(vector<int> &ans,int n){
        buildHeap(ans,ans.size());
        
        for(int i=n-1;i>=0;i--){
            swap(ans[0],ans[i]);
            heapify(ans,i,0);
        }
    }
    
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> ans;
        for(int i=0;i<K;i++){///phle maine ek vec bna iya ...hepify build head then heap sort lga liya 
            for(int j=0;j<K;j++){
                ans.push_back(arr[i][j]);
            }
        }
        
        heapSort(ans,ans.size());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends