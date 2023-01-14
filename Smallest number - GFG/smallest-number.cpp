//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int S, int D){
        // code here 
     /* string str="";
        int s=S;
        while(S)
        {
            str+=to_string(S/9);
            S/=9;
        }
        s=s-s/9;
        for(int i=1;i<D;i++)
        {
           if(s>9)
           {
               s-=9;
               str+=to_string(9);
           }
           else
           {
               
           }
        }
        
        return str;*/
         if(S==0){
            if(D==1){
            return "0";
            }
            else{
                return "-1";
            }
        }
       if(D*9<S)
        {
            return "-1";
        }

        string str="";
        for(int i=1;i<D;i++)
        {
            if(S>9)
            {str+="9";S-=9;}
            else
            {
                str+=to_string(S-1);
                S=1;
            }
        }
            str+=to_string(S);
        
        reverse(str.begin(),str.end());
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
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends