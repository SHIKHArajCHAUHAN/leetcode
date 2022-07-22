class Solution {
public:
    int divisorSubstrings(int num, int k) {
       int numm=0;
        int count=0;
        string arr=to_string(num);
        for(int i=0;i<k;i++)
        {
           numm=numm*10+(arr[i]-'0');
            
        }
        if(numm!=0&&num%numm==0)
        {
            count++;
        }
        for(int j=k;j<arr.length();j++)
        {
            numm=(numm%(int)pow(10,k-1))*10+(arr[j]-'0');
                  if(numm!=0&&num%numm==0)
                  count++;
        }
                  return count;
    }
};