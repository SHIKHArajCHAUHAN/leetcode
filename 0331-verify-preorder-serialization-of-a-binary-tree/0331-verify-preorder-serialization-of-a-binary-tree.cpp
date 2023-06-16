class Solution {
public:
    bool isValidSerialization(string preorder) {
//        stringstream s(preorder);
//         stack<string> st;
//         string str;
        
//         while(getline(s, str, ',')){
//             if(st.empty() || str != "#") st.push(str);
//             else{
//                 while(!st.empty() && st.top() == "#"){
//                     st.pop();
//                     if(st.empty()) return false;
//                     else st.pop();
//                 }
                
//                 st.push(str);
//             }
//         }
        
//         return st.size() == 1 && st.top() == "#"; 
         stringstream ss(preorder);
        string curr;
        int nodes = 1;
        while (getline(ss, curr, ',')) {
            nodes--;// or geting #
            if (nodes < 0) return false;
            if (curr != "#") nodes += 2;//res to two more vacancy
        }
        return nodes == 0;
    }
};