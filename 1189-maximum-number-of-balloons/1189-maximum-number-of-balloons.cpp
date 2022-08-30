class Solution {
public:
    int maxNumberOfBalloons(string text) {
       map<char,int>mp;
        map<char,int>mp2;
		string s="balloon";
		for(auto i:s)
        {
            mp[i]++;
        }
		int count=INT_MAX;
		for(auto i:text)
        {
            mp2[i]++;   // fre/number
        }
		for(auto i:mp){
			if(mp2[i.first]) count=min(mp2[i.first]/i.second,count);
			else return 0;
		}
		return count;
    }
};