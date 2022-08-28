class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     /*   
        int n=heights.size();
            int index1=-1;
            int index2=n;

        vector<int>right(n);
        vector<int>left(n);
        stack<pair<int,int>>s,s2;
        //int n=heights.size();
        for(int i=0;i<n;i++)
        {
           if(s.size()==0) {right.push_back(index1);}
            else if(s.size()>0 &&s.top().first<heights[i]) {right.push_back(s.top().second);}
            else if(s.size()>0&&s.top().first>=heights[i]) 
            {
                while(s.size()>0 &&s.top().first>=heights[i]){s.pop();}
                if(s.size()==0) {right.push_back(index1);}
                else{} right.push_back(s.top().second);}
            }s.push({heights[i],i});
        }
    
          for(int i=n-1;i>=0;i--)
        {
              if(s2.size()==0) 
              { left.push_back(index2);}
            else if(s2.size()>0 &&s2.top().first<heights[i])
            {left.push_back(s2.top().second);}
            else if(s2.size()>0&&s2.top().first>=heights[i]) 
            {
                while(s2.size()>0 &&s2.top().first>=heights[i])
                {s2.pop();}
                if(s2.size()==0)
                { left.push_back(index2);}
                else 
                {left.push_back(s2.top().second);}
            }s2.push({heights[i],i});
        }
        reverse(left.begin(),left.end());
        vector<int>width(n);
        for(int i=0;i<n;i++)
        {
            width[i]=abs(right[i]-left[i])-1;
        }
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int x=width[i]*heights[i];
          maxx=max(maxx,x);  
        }
        return maxx;
        
    }
};*/
    
		int n= heights.size();
		vector<int> left,right;
	stack<pair<int,int>> s1,s2;
	int pseudo_index =-1;
	int pseudo_index1 =n;
	for (int i=0;i<n;i++)
	{
	  if (s1.size()==0)
	  {
		left.push_back(pseudo_index);
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
		  left.push_back(pseudo_index);
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
		right.push_back(pseudo_index1);
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
		  right.push_back(pseudo_index1);
		}
		else
		{
		  right.push_back(s2.top().second);
		}
	  }
	  s2.push({heights[i],i});
	}
	reverse(right.begin(),right.end());
	int m=INT_MIN;
	for (long long i=0;i<n;i++)
	{
	  m=max(m,(right[i]-left[i]-1)*heights[i]);
	}
	return m;
	}
};
