class Solution {
public:

    bool isPalindrome(string s) {
    int r = 0;
    int l = s.size() - 1;
    if (s.empty()) return true;
    while (r < l) {
        if (isalnum(s[r]) && isalnum(s[l]) && tolower(s[r]) != tolower(s[l])) {
            return false;
        } else if (!isalnum(s[r])){
            r++;
        } else if (!isalnum(s[l])){
            l--;
        } else {
            r++;
            l--;
        }
    }
    return true;
    }
};