//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
          /*  vector<int>v;
            if(pat.length()>txt.length())
        {
            return {-1};
        }
        for(int i=0;i<txt.length()-pat.length()+1;i++)
        {
            if(pat==txt.substr(i,pat.length()))

            {

            v.push_back(i+1);}
        }
        return {-1};*/
            string s;
           vector<int> v,vn;
           vn.push_back(-1);
           
           int i=0,j=0;
            while(j<txt.size()){
                s+=txt[j];
                if(j-i+1<pat.size()){
                    j++;
                }
                else if(j-i+1==pat.size()){
                   if(s==pat)
                      v.push_back(j-pat.size()+2);
                      
                   s.erase(s.begin()+0);
                   i++; j++;
                }
            }
            
            if(v.size()>0){
                 return v;
            }
            else {
                 v.push_back(-1);
            }
                 return v;
}
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends