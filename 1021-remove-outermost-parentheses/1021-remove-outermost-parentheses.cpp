class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string temp="";
        int open=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(open>0) temp+=s[i];
                open++;
            }
            else{
                open--;
                if(open>0) temp+=s[i];
            }
        }
        return temp;
    }
};