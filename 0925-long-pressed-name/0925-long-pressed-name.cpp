class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.size();
        int m=typed.size();
        if(name[0]!=typed[0]&&name[n-1]!=typed[m-1]) return false;
        if(m<n) return false;
        int j=1;
        for(int i=1;i<n;){
            if(name[i]==typed[j]){
                i++;
                j++;
            }
            else if(typed[j]==name[i-1]) j++;
            else return false;
            if(j==m && i!=n) return false;
        }
        while(j<typed.size()){
            if(typed[j]!=name[n-1]) return false;
            j++;
        }
        return true;
     // int i=0,j=0;
     //    int n=name.size();
     //    int m=typed.size();
     //    while(i<n&&j<m)
     //    {
     //        if(name[i]==typed[j])
     //        {
     //            i++;j++;
     //        }
     //        else j++;
     //    }
     //    if(i==n) return true;
     //    else return false;
        
    }
};