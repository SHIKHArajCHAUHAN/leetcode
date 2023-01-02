class Solution {
public:
    string capitalizeTitle(string title) {
               transform(title.begin(),title.end(),title.begin(),:: tolower);
        int cnt=0;
        for(int i=0;i<=title.length();i++){
            if(title[i]==' ' || title[i]==NULL){
                if(cnt>2){
                    title[i-cnt]=toupper(title[i-cnt]);
                }
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        return title;

    }
};