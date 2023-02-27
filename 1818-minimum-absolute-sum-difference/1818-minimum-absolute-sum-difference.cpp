class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        ///done from vedio....................................
       int ans=0, cnt=0, M=1e9+7;
        vector<int>v, v1;
        for(int i=0; i<nums1.size(); i++){
            v.push_back(abs(nums1[i]-nums2[i]));
            cnt=(cnt+abs(nums1[i]-nums2[i]))%M;
        }
        sort(nums1.begin(), nums1.end());
        for(int i=0; i<nums1.size(); i++){
            int pos=lower_bound(nums1.begin(), nums1.end(), nums2[i])-nums1.begin();
            if(pos==0){
                v1.push_back(abs(nums2[i]-nums1[pos]));
            }
            else if(pos==nums1.size()){
                v1.push_back(abs(nums2[i]-nums1[pos-1]));
            }
            else{
                v1.push_back(min(abs(nums2[i]-nums1[pos]), abs(nums2[i]-nums1[pos-1])));
            }
        }
        for(int i=0; i<nums1.size(); i++){
            ans=max(ans, v[i]-v1[i]);
        }
        return (cnt-ans+M)%M;  
    }
};