class Solution {
public:
    bool isValidCharacter(char ch){
        if(ch >= 'A' && ch <= 'Z') return true;
        else if(ch >= 'a' && ch <='z') return true;
        else if(ch >= '0' && ch <= '9') return true;
        else return false;
    }
    string normalizeString(string& s){
        string newStr = "";
        for(int i = 0; i < s.length();i++){
            char ch = s[i];
            if(isValidCharacter(ch)){
                if(ch >= 'A' && ch <= 'Z'){
                    ch = ch - 'A' + 'a';
                }
                newStr.push_back(ch);
            }
        }
        return newStr;
    }
    bool isPalindrome(string s) {
        string newStr = normalizeString(s);
        cout << newStr;
        int i = 0;
        int j = newStr.length() - 1;

        while(i <= j){
            if(newStr[i] != newStr[j]) {
                return false;
            } else{
                i++;
                j--;
            }
        }
        return true;
    }
};