//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<int>lower(26,0),upper(26,0);
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                lower[str[i]-'a']++;
            }
            else
            {
                upper[str[i]-'A']++;
            }
        }
        int i=0,j=0;
        for(int k=0;k<n;k++)
        {
          if(str[k]>='a'&&str[k]<='z') 
          {
              while(lower[i]==0)
              {
                  i++;
              }
              lower[i]--;
              str[k]='a'+i;
          }
          else
          {
              while(upper[j]==0)
              {
                  j++;
              }
             upper[j]--;
              str[k]='A'+j;
          }
        }
        return str;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends