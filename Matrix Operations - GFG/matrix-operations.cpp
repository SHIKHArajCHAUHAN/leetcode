//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
     vector<int>dx={0,1,0,-1};

    vector<int>dy={1,0,-1,0};

    pair<int,int> endPoints(vector<vector<int>> mat){

        //code here

        int n=mat.size();

        int m = mat[0].size();
        unordered_map<int,int>mp;

        mp[0]=1;

        mp[1]=2;

        mp[2]=3;

        mp[3]=0;
        

        int dir=0;
        int i=0,j=0;

       while(i>=0 &&j>=0&&i<n&&j<m)

       {
        if(mat[i][j]==1)

           {

               mat[i][j]=0;

               dir=mp[dir];

               

           }

           

           i = i+dx[dir];

            j=j+dy[dir];

       }

       

       if(i>=n)

       i=i-1;
       if(i<0)
       i++;
       if(j<0)
       j++;
       if(j>=m)
       j=j-1;

       return {i,j};
    }

};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends