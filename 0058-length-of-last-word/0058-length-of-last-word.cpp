class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans="";
        int count=0;
        int on=0;
        for(int i=0;i<s.size();i++){
            if (isalpha(s[i])){
                if(on==1){
                    count++;
                }
                else {
                    count=1;
                    on=1;
                    }
            }
            else{
                on=0;
                continue;
            }
        }
        return count;
    }
};