//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
 typedef pair<int,int> pi;
class Solution{
public:

//      vector<int> replaceWithRank(vector<int> &arr, int N){
//       vector<int>newarry(arr.begin(),arr.end());
//     map<int,int>mp;
//       int cnt=1;
      
//       sort(newarry.begin(),newarry.end());
//       for(int i=0;i<N-1;i++)
//       {
//           mp[newarry[i]]=cnt;
//           if(newarry[i]!=newarry[i+1])cnt++;
//       }
//       if(newarry[N-2]!=newarry[N-1])mp[newarry[N-1]]=cnt++;

//       for(int i=0;i<N;i++)
//       {
//           arr[i]=mp[arr[i]];
//       }
// return arr;
   
    vector<int> replaceWithRank(vector<int> &arr, int n){
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        
        for(int i = 0; i<n; i++)
        {
            pq.push(make_pair(arr[i], i));
        }
        int cnt = 1;
        while(!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            arr[p.second] = cnt;
            if(!pq.empty() && (pq.top().first != p.first))
                cnt++;
        }
        return arr;
     }
};



//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends