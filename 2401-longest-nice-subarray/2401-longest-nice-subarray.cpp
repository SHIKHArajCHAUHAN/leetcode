class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int start=0,end=0,maxi=1;
for(int i=1;i<nums.size();i++)
{
for(int j=i-1;j>=start;j--)
{
if((nums[j]&nums[i])!=0)
{
start=j+1;break;
}
}
end=i;
maxi=max(maxi,end-start+1);
}
return maxi;
    }
};