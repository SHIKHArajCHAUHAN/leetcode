class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
       int r = 1e7;
		if(ceil(hour)<dist.size()) return -1;
		int l = 1;
		while(l<r){
			int mid = (l+r)/2;
			double c = 0;
			for(int i = 0;i< dist.size()-1;i++)
				c += ceil((double)(dist[i])/mid);

			c += ((double)dist.back()/mid);
			if(c <= hour) r = mid;
			else l = mid+1;
		}
		return l; 
    }
};