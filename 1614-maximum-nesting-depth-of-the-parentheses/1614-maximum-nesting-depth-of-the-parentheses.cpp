class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int count=0;
        int maxi=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='('){
                count++;
            }
            else if(count>=1 && s[i]==')'){
                count--;
            }
        }
        return count;
    }
};