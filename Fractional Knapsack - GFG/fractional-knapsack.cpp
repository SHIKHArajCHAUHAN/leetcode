//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
       static bool cmp(pair<pair<int,int>,double> a, pair<pair<int,int>,double> b)
    {
        return  a.second>b.second;
    }
    
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
       vector<pair<pair<int,int>,double>> v;
       
       double profit=0;
       
       for(int i=0;i<n;i++)
       {   
           double rate= (double)arr[i].value/(double)arr[i].weight;
           
           v.push_back({{arr[i].value,arr[i].weight},rate});
       }
       
       sort(v.begin(),v.end(),cmp);//sort in decs order by rate=item wt/item quntity
       
       for(int i=0;i<n;i++)
       {
           if(W>v[i].first.second)
           {
               W=W-v[i].first.second;
               profit=profit+v[i].first.first;
           }
           
           else
           {   
               double rem=double(W*v[i].second);
               profit=profit+rem;
               break;
           }
       }
       
       return profit;   
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends