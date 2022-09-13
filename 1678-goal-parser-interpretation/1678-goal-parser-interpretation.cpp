class Solution {
public:
    string interpret(string command) {
        int n=command.size();
        string ans="";
      for(int i=0;i<=command.length()-1;i++)
      {
          if(command[i] == 'G')
ans += "G" ;

        if(i < n-1 && command[i] == '(' && command[i+1] == ')')
        {
            ans += "o";
            i++ ;
        }
        
        if(i < n-3 && command[i] == '(' && command[i+1] == 'a')
        {
            ans += "al" ;
            i += 3 ;
        }
    }
    
    return ans ;
      }
    
};