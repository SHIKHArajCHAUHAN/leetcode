class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
         if (coordinates.size() == 2) return true;		
		int x0 = coordinates[0][0];
		int y0 = coordinates[0][1];
		int x1 = coordinates[1][0];
		int y1 = coordinates[1][1];
		int m = x1 - x0;
		int n = y1 - y0;
		for (int i = 2; i < coordinates.size(); i++)
		{
			if (m * (coordinates[i][1] - y0) != n * (coordinates[i][0] - x0))
			{
				return false;
			}
		}
		return true; 
    }
};