class Solution {
public:
    int reverse(int x) {
        int a=1;
        if(x<0) a=-1;
        long long ans=0;
        string s=to_string(x);
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(isdigit(s[i])){
                int digit=s[i]-'0';
                ans=(ans*10)+digit;
                if(ans>INT_MAX) return 0;
            }
        }
        return ans*a;
    }
};