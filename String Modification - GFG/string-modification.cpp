//{ Driver Code Starts
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
/* The below function should return 
the transformed string */
class Solution{
  public:
    string rearrangeString(string str)
    {
         int n=str.length();
   vector<int>map(26);
   for(auto i:str)map[i-'a']++;
   priority_queue<pair<int,char>>pq;
   for(char i='a';i<='z';i++){
       if(map[i-'a'])pq.push({map[i-'a'],i});
   }
   string ans=str;
   int i=0;
   while(pq.size()>0){
       int tmp=pq.top().first;
       while(tmp>0){
       ans[i]=pq.top().second;
       tmp--;
       i+=2;
       if(i>=n)i=1;
       }
       pq.pop();
   }
   
   return ans;
       //Your code here.
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    string str;
	fflush(stdin);
	cin>>str;
	int oldLength=str.length();
	int chs[26];
	memset(chs,0,sizeof(chs));
	for(int i=0;i<str.length();i++){
	    chs[str[i]-'a']++;
	}
	Solution obj;
    str=obj.rearrangeString(str);
	int flag=1,ff=0;
	int chs2[26];
	memset(chs2,0,sizeof(chs2));
	for(int i=0;i<str.length();i++)
	    if(str[i]>='a'&&str[i]<='z')
	        chs2[str[i]-'a']++;
    if(str.length()!=oldLength)
        cout<<"0\n";
    else{
        for(int i=0;i<26;i++)
            if(chs[i]!=chs2[i])
                ff=1;
        if(ff==1){
            cout<<"0\n";
        }
        else{
        	if(str!="-1"){
            	for(int i=0;i<str.length();i++)
            	{
            		if(i>0)
            		if(str[i-1]==str[i])
            			flag=0;
            	}
            	if(flag==1)
            		cout<<"1\n";
            	else
            	cout<<"0\n";
        	}
        	else
        		cout<<"0\n";
            }
        }
	}
    return 0;
}
// } Driver Code Ends