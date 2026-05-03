class Solution {
public:
    int mirrorDistance(int n) {
        string s=to_string(n);
        int l=s.size();
        if(l==1) return 0;
        int b=0;
        for(int i=l-1;i>=0;i--){
            int curr=s[i]-'0';
            b=(b*10)+curr;
        }
        return abs(n-b);
    }
};