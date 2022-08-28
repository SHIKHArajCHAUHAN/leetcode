class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
		int n= heights.size();
		vector<int> left,right;
	stack<pair<int,int>> s1,s2;
	int index =-1;
	int index1 =n;
	for (int i=0;i<n;i++)
	{
	  if (s1.size()==0)
	  {
		left.push_back(index);
	  }
	  else if (s1.size()>0 && s1.top().first<heights[i])
	  {
		left.push_back(s1.top().second);
	  }
	  else if (s1.size()>0 && s1.top().first>=heights[i])
	  {
		 while(s1.size()>0 && s1.top().first>=heights[i])
		 {
		   s1.pop();
		 }
		if (s1.size()==0)
		{
		  left.push_back(index);
		}
		else
		{
		  left.push_back(s1.top().second);
		}
	  }
	  s1.push({heights[i],i});
	}
	for (int i=n-1;i>=0;i--)
	{
	  if (s2.size()==0)
	  {
		right.push_back(index1);
	  }
	  else if (s2.size()>0 && s2.top().first<heights[i])
	  {
		right.push_back(s2.top().second);
	  }
	  else if (s2.size()>0 && s2.top().first >= heights[i])
	  {
		while(s2.size()>0 && s2.top().first >= heights[i])
		{
		  s2.pop();
		}
		if (s2.size()==0)
		{
		  right.push_back(index1);
		}
		else
		{
		  right.push_back(s2.top().second);
		}
	  }
	  s2.push({heights[i],i});
	}
	reverse(right.begin(),right.end());
	int maxx=INT_MIN;
	for (long long i=0;i<n;i++)
	{
	  maxx=max(maxx,(right[i]-left[i]-1)*heights[i]);
	}
	return maxx;
	}
// abbb one-d array m convert kr lo;
	int maximalRectangle(vector<vector<char>>& matrix) {
		int m=matrix.size();
		if(m==0) return 0;
		int n=matrix[0].size(), res=0;
		vector<int> vec(n, 0);

		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(matrix[i][j]=='1')
					vec[j]+=1;
				else
					vec[j]=0;
			}

			res = max(res, largestRectangleArea(vec));
	
		}
		return res;
	}
};