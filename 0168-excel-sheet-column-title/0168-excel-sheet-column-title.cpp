class Solution {
public:
    string convertToTitle(int columnNumber) {
            string columnTitle = "";
        while (columnNumber) {
            columnTitle = char(((columnNumber - 1) % 26) + 'A') + columnTitle;
            columnNumber = (columnNumber - 1) / 26;
        }
        return columnTitle;
    }
};