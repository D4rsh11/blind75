class Solution {
public:
    bool isPalindrome(string s) {

        string bs="";
        for(char c : s ){
            if(isalnum(c)){
                bs+=tolower(c);
            }
        }

        string reverseStr(bs.rbegin(),bs.rend());
        if(reverseStr==bs){
            return true;
        }
        return false;
    }
};