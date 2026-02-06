class Solution {
  public:
  bool check(string &s,int l,int h){
      if(l>=h) return true;
      return s[l]==s[h]&&check(s,l+1,h-1);
  }
    bool isPalindrome(string& s) {
        int n=s.length();
        check(s,0,n-1);
    }
};

