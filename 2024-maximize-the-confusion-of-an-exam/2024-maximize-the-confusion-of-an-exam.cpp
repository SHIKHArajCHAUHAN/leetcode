class Solution {// must be in catogary of easy question
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
       int n=answerKey.size(), cntt=0,cntf=0,i=0,j=0,maxx=0;
        while(j<n)
        {
            if(answerKey[j]=='T')
                cntt++;
            else if(answerKey[j]=='F')
                cntf++;
            if(cntt<=k || cntf<=k)
            maxx=max(maxx,j-i+1);
            else
            {
                while(cntt>k && cntf>k)
                {
                    if(answerKey[i]=='T')
                        cntt--;
                    else
                        cntf--;
                    i++;
                }
            }
            j++;
        }
        return maxx; 
    }
};