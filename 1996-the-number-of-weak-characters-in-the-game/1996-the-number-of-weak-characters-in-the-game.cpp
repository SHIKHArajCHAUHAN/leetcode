class Solution {   
static bool comp(const vector<int>&a,const vector<int>& b){
if(a[0]==b[0])return a[1]>b[1];
return a[0]<b[0];
}
 public:
int numberOfWeakCharacters(vector<vector<int>>& properties) {
int n=properties.size();
sort(properties.begin(),properties.end(),comp);
int maxx=INT_MIN;
int count=0;
for(int i=n-1;i>=0;i--){
if(properties[i][1]<maxx) count++;
maxx=max(maxx,properties[i][1]);
}
return count;
}
};
