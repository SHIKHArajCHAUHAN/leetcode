class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int>v;
int mid=arr[(arr.size()-1)/2];
int s=0;
int e=arr.size()-1;
while(s<=e)
{
if(abs(arr[s]-mid)>abs(arr[e]-mid))
{
v.push_back(arr[s]);
s++;
}
else
{
v.push_back(arr[e]);
e--;
}
}
    arr.clear();
    int i=0;
    while(k--)
    {
        arr.push_back(v[i]);i++;
    }
    return arr;
    }
};