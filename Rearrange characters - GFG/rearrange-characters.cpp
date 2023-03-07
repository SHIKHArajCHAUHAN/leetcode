//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string str)
    {   string s=str; 
        int M[26] = {0};
        for(auto x:s)
            M[x-'a']++;
        int maxx = 0;
        char maxxalpha;
        int maxxat;
        for(int i=0; i<26; i++)
        {
            if(M[i]>maxx)
            {
                maxx = M[i];
                maxxalpha = i + 'a';
                maxxat = i;
            }
        }
        if(maxx*2 > s.size()+1) return "-1";
        M[maxxat] = 0;
        int i = 0;
        while(maxx--)
        {
            s[i] = maxxalpha;
            i+=2;
        }
        for(int j=0; j<26; j++)
        {
            while(M[j]--)
            {
                if(i>=s.size())
                    i = 1;
                s[i] = j + 'a';
                i+=2;
            }
        } 
        return s;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}
// } Driver Code Ends