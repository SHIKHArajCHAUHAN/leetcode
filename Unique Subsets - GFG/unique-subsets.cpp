//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find all possible unique subsets.
     void fn(vector<int> temp, set<vector<int>> &S, int index, vector<int>&nums)
    {
        if(index==nums.size())
        {
            sort(temp.begin(), temp.end());
            S.insert(temp);
            return;
        }
        temp.push_back(nums[index]);
        fn(temp, S, index+1, nums);
        temp.pop_back();
        fn(temp, S, index+1, nums);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
    vector<vector<int>>v;
        set<vector<int>>s;
        fn({},s,0,arr);
        for(auto i:s)
            v.push_back(i);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends