//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
    public:
    unordered_map<string,bool> mpp;
    bool solve(string s1,string s2){

        if(s1.compare(s2)==0){

            return true;}
        if(s1.size()<=1){

            return false;}
        int n=s1.size();

        string key=s1;

        key.push_back(' ');

        key.append(s2);

        if(mpp.find(key)!=mpp.end()){

            return mpp[key];

        }

        bool flag=false;

        for(int k=1;k<n;k++){

            if(solve(s1.substr(0,k),s2.substr(n-k,k)) and solve(s1.substr(k,n-k),s2.substr(0,n-k)) or solve(s1.substr(0,k),s2.substr(0,k)) and solve(s1.substr(k,n-k),s2.substr(k,n-k))){

                flag=true;

                break;}
        }
        return mpp[key]=flag;
    }
    bool isScramble(string S1, string S2){
        //code here
        return solve(S1,S2);
    }    
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        string S1, S2;
        cin>>S1>>S2;
        Solution ob;
        
        if (ob.isScramble(S1, S2)) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends