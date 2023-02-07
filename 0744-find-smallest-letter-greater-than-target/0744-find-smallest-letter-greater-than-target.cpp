class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
      /*  map<string,int>mp;
        int res=letters[0];
        for(int i=0;i<letters.size();i++)
        {
            mp[letters[i]]++;
        }
        letters.clear();
        for(auto i:mp)
        {
            letters.push_back(i.first);
        }
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i]>target) return letters[i];
        }
        return res; */
        int s=0, e=letters.size()-1;
		char ans=letters[0];
		while(s<=e){
			int mid=s+(e-s)/2;
			if(letters[mid]>target){
				ans=letters[mid];
				e=mid-1;
			}
			else{
                s=mid+1;
            }
		}
		return ans;
    }
};