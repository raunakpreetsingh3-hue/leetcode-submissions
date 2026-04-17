class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int j=s.size()-1;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[j]) return false;
            j--;
        }
        return true;
    }
};