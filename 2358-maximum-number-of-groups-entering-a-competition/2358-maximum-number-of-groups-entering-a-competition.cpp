class Solution {
public:
    int maximumGroups(vector<int>& grades) {
      sort(grades.begin(),grades.end());
        
        int cnt=0;
        int x=1;
        int i=0;
        while(i<grades.size())
        {
            cnt++;
            x++;
            i+=x;
            
        }
        return cnt;
    }
};