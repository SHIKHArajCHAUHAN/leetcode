class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int n1=sequence.size();
        int n2=word.size();
        int cnt=0;
        ////good concept
		string temp = word;

		while(sequence.find(temp) != string::npos){
			temp += word;
			cnt++;
		}

		return cnt;
    }
};