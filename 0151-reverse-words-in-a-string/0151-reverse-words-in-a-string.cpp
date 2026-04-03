class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int first=-1;
        string temp="";
        int open=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                if(open==0) first=i;
                open=1;
            }
            else{
                if(open==1) {
                    temp+= s.substr(i+1,first-i);
                    temp+=' ';
                }
                open=0;
            }
        }
        if(open==1){
            temp+=s.substr(0,first+1);
            }
        if(temp.length()>0 && temp.back()==' '){
            temp.pop_back();
        }
        return temp;
    }
};