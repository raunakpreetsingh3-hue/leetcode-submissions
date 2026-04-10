class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            string s="";
            int x=n;
            while(x>0){
                int m=x%i;
                x/=i;
                s+=to_string(m);
            }
            string rev=s;
            reverse(rev.begin(),rev.end());
            if(rev!=s) return false;
        }
        return true;
    }
};