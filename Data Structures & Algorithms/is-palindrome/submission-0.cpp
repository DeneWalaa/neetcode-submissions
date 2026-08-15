class Solution {
public:

    bool isAlphaNumeric(char c){
        if(c >= 'a' && c <= 'z' || c >= '0' && c <= '9' || c >= 'A' && c <= 'Z') return true;
        else return false;
    }

    bool isPalindrome(string s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end){
            
            if(!isAlphaNumeric(s[start])){
                start++;
                continue;
            }
            if(!isAlphaNumeric(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start]) == tolower(s[end])){
                start++;
                end--;
            } else{
                return false;
            }
        }
        return true;

    }
};
