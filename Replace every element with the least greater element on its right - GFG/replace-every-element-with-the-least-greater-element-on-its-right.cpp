//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
     /* vector<int>v;
      vector<int>vec;
      for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                v.push_back(arr[j]);
            }
        }
        sort(v.begin(),v.end());
        if(v.empty())
        {
            vec.push_back(-1);
        }
        vec.push_back(v[0]);
        v.clear();
      }
      return vec;*/
             vector<int>v(n);
        set<int>st;
        for(int i=n-1;i>=0;i--){

            st.insert(arr[i]);

            auto it = st.upper_bound(arr[i]);

            if(it==st.end()){

                v[i]=-1;

            }else{

                v[i]=*it;
                }
            }
        return v;
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
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends