//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
      bool knows(vector<vector<int>> M,int a, int b){

        if(M[a][b]==1){

            return true;}
        else{

            return false;
        }
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
      /*  stack<int>s;
        int c;
        for(int i=0;i<n;i++)
        {
            s.push(i);
        }
            int a=s.top();s.pop();
            int b=s.top();s.pop();
            while(s.size()>1)
            {
                if(knows(M,a,b))
                {
                  a=s.top();s.pop();
                }
                else
                {
                  b=s.top();s.pop();
            
                }
            }
           c=s.top();s.pop();
           if(knows(M,c,b)) c=b;
           if(knows(M,c,a))c=a;
        
        for(int i=0;i<n;i++)
        {
            if((i!=c)&&(knows(M,c,i)||!knows(M,i,c))) return -1;
        }
        return c;*/
                stack<int> st{};
        
        int temp = n-1;
        
        while(temp>=0)
         st.push(temp--);
        
        int a,b;
        
        while(st.size()>1)
        {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            
            if(M[a][b]) //a is not a celebrity
             st.push(b);
            else if(M[b][a]) 
             st.push(a);
             else
              continue;
        }
        
        if(st.empty())
            return -1;
        
        int c = st.top(); // potential candidate;
        
        bool rowCheck = true;
        int count = 0;
        
        for(int i=0; i <n; i++)
        {
            if(M[c][i] == 1)
                rowCheck = false;
            if(M[i][c] == 0)
                count++;
        }
        
        if(rowCheck && count == 1)
            return c;
        else
            return -1;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends