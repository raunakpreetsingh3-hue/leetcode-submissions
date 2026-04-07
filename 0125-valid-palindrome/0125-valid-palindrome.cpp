class Solution {
public:
    bool isPalindrome(string s) {
        string b="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                if(isalpha(s[i])) b+=tolower(s[i]);
                else b+=s[i];
            }
        }
        int i=0;
        int j=b.size()-1;
        while(i<=j){
            if(b[i]==b[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};