class Solution {
public:
    bool isPalindrome(string s) {
        string original = s;
        reverse(s.begin(), s.end());
        return original == s;
    }
};
