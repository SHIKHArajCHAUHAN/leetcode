//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        unordered_map<int,int> rmap,lmap;
        rmap[A[N-1]]++;
        lmap[A[0]]++;

        int right[N]={0},left[N]={0};
        for(int i=N-2;i>=0;i--){
            right[i]=rmap.size();
            rmap[A[i]]++;
        }
        for(int i=1;i<N;i++){
            left[i]=lmap.size();
            lmap[A[i]]++;
            
        }
        vector<int>ans;
        for(int i=0;i<N;i++){
            ans.push_back(left[i]-right[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends