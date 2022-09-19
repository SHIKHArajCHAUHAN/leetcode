class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
          for(int i = 0 ; i < s.length();i++) {
        
            if(s[i] != '0') { 
                
            for(int j = i+1 ; j < s.length();j++) {
			
                if(s[i]==s[j]){
				
                    s[j] = '0'; 
					
                    int a = s[i] - 97;
					
                    int dist = j - i-1;
					
                    if(distance[a]!=dist) {
					
                        return false;
						
                    }   
                }
            }
            }
         }
    return true;  
    }
};