class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int open=0;
        int ind=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                if(open==0) ind=i;
                open=1;
            }
            else if(open==1 && s[i]==' '){
                ans+=s.substr(i+1,ind-i);
                ans+=' ';
                open=0;
            }
        }
        if(open==1){
            ans+=s.substr(0,ind+1);
        }
        if(ans.length()>0 && ans.back()==' '){
            ans.pop_back();
        }
        return ans;
    }
};