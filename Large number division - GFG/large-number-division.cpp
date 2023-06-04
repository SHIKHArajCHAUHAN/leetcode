//{ Driver Code Starts
// C++ program to implement division with large
// number
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string longDivision(string S, int D)
    {
        //code here.
           int i,val=0;

        string str;

        for(int i=0;i<S.size();i++){
            val = val*10+S[i]-'0';
            if(val>=D)
            {
                str+=(val/D)+'0';
                val=val%D;
            }
            else

            {
                if(str.size()>=1){

                    str+='0';
                }

            }
        }
        if(str.size()==0){

                str+='0';

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
	    string number ;
	    int divisor;
	    cin>>number;
	    cin>>divisor;
	    Solution ob;
	cout << ob.longDivision(number, divisor)<<endl;
	}
	return 0;
}
// } Driver Code Ends