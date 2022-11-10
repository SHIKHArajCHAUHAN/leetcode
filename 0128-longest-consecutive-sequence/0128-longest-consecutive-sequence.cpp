class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      //sort(nums.begin(),nums.end())
        int n=nums.size();
if(n==0){
return 0;
}else if(n==1){
return 1;
}
set st(nums.begin(),nums.end());//set me dala or y to orderd ayga usko vector m dall diya
        
vector vptr(st.begin(),st.end());
n=vptr.size();
int count=1,max=1;
sort(vptr.begin(),vptr.end());
for(int i=1;i<n;i++){
if(vptr[i]==vptr[i-1]+1){
count++;
if(count>=max){
max=count;
}
}else{
count=1;
}
}
return max;
      ////esko mp se ke skte hai nums[i or pos ko subtract ke k]  
    }
};