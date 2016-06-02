
//168 - Excel Sheet Column Title
//Given a positive integer, return its corresponding column title as appear in an Excel sheet. For example: 1 -> A , 2 -> B , 26 -> Z, 27 -> AA
//- C++ Solution :

class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while (n>0){
            if (n%26==0){
                res = 'Z' + res;
                n = n/26 -1;
            }else{
                res = char(n%26 -1 + 'A') + res;
                n = n/26;
            }
        }
        return res;
    }
}; 



