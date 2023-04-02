//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}

// } Driver Code Ends


/*You have to complete this function*/


 

void solve(vector<string> &s,string &op,string ip){

    if(ip.length()==0){

        s.push_back(op);

        return ;

    }

    string op1=op+ip[0];

    string op2=op+" "+ip[0];

    ip.erase(ip.begin()+0);

    solve(s,op1,ip);// nhi space

    solve(s,op2,ip); //spCE 

    return;

}

vector<string>  spaceString(char str[])

{

    vector<string>s;

    string ip=str;

    string op="";

     op+=ip[0];

    ip.erase(ip.begin()+0);

    solve(s,op,ip);

    return s;

}