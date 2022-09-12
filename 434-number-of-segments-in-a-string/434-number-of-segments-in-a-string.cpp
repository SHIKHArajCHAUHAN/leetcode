class Solution {
public:
    int countSegments(string s) {
     int count=0;
       /* for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ') count++;
        }
        if(count!=1) return count;
        else return 0;*/
                int i=0;
        while(i<s.length())     

        { 
          if(s[i]!=' ')
          {
          	while(s[i]!=' ' && i<s.length())i++;
          	
            count++;
          }
          else i++;
      }
        return count;     
    }
};