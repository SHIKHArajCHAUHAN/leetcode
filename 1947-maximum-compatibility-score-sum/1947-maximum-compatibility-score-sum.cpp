class Solution {
public:
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
     /* int maxx=0;
        int ans=0;
        int m=students.size();
        for(int i=0;i<m;i++)
        {
            int cnt=0;
            for(int j=0;j<students[0].size();j++)
            {
              if(students[i][j]==mentors[i][j])cnt++;
                
            }
            maxx=max(maxx,cnt);
            ans+=maxx;
        }
        return ans;*/
        int ans = 0;
	vector<int>v;
	for(int i=0;i<students.size();i++) v.push_back(i);/// 0 1 2 3 
	do{
		int curr = 0;
		for(int i = 0;i<students.size(); i++)
			for(int j=0;j<students[v[i]].size();j++)
				curr += (students[v[i]][j] == mentors[i][j]);
		ans = max(ans, curr);
	} while(next_permutation(v.begin(), v.end()) );
	return ans;
    }
};