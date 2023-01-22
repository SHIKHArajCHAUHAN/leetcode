//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string N) 
    { 
        // Complete the function
    /*long long int s=stoi(N);
        int n=s%10;
        if(n==0||n==1||n==2||n==3||n==4||n==5) return to_string((s/10)*10);
        else return to_string((s/10)*10+10);*/
       int n=N.length();
       char c=N[n-1];
        if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5')
        {
            N[n-1]='0';
        }
        else
        {
            N[n-1]='0';
            int j=n-2;
            while(j>=0&&N[j]=='9')
            {
                N[j]='0';
                j--;
            }
                if(j<0)
                {
                    N="1"+N;
                }
                else
                {
                    N[j]+=1;
                }
            
        }
       return N;
        
    }  

};

//{ Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }
    
	return 0;
}
// } Driver Code Ends