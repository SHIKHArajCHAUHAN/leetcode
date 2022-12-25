class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
           int n = spells.size();
        int m = potions.size();
      vector<int>v(n,0);
       /* for(int i=0;i<spells.size();i++)
        {
            int cnt=0;
            for(int j=0;j<potions.size();j++)
            {
               if(spells[i]*potions[j]>=success) cnt++; 
            }
            v.push_back(cnt);
        }*/
        sort(potions.begin(),potions.end());
        int s=0,e=potions.size()-1;
        for(int i=0;i<n;i++){
            long long x = spells[i]; s=0,e=potions.size()-1;
            int count=0;
            int mid;
            while(s<e){
                mid = s+(e-s)/2;
                if(x*potions[mid]>=success){
                    e=mid;
                }
                else{
                    s = mid+1;
                }
            }

            if( x*potions[m-1] < success)
                v[i]=0;
            else
                v[i] = m-s;
        }
    
        return v;
        
    }
};